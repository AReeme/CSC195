#pragma once 
#include <iostream> 

namespace nc
{
	template<typename T>
	class list
	{
		struct node_t
		{
			node_t(const T& value) : _value{ value } {}

			T _value;
			node_t* _next{ nullptr };
			node_t* _prev{ nullptr };
		};

	public:
		list() {}
		list(const list& other);
		~list() { clear(); }

		list& operator = (const list& other);

		T& front() { return _head->_value; }
		T& back() { return tail()->_value; }

		void push_front(const T& value);
		void pop_front();

		void push_back(const T& value);
		void pop_back();

		void remove(const T& value);
		void reverse(); // see references for implementation 
		void clear(); // search online for implementation 

		bool empty() { return _head = nullptr; }
		size_t size(); // see references for implementation 

		void write(std::ostream& stream); // print the list nodes to the console 

	private:
		node_t* tail()
		{
			node_t* node = _head; // nullptr == 0
			while (node && node->_next)
			{
				node = node->_next;
			}
			return node;
		}

	private:
		node_t* _head = nullptr;
	};
	
	template<typename T>
	inline list<T>::list(const list& other)
	{
		node_t* node = other._head;
		while (node)
		{
			push_back(node->_value);
			node = node->_next;
		}

	}

	template<typename T>
	inline list<T>& list<T>::operator=(const list& other)
	{
		clear();

		node_t* node = other._head;
		while (node)
		{
			push_back(node->_value);
			node = node->_next;
		}

		return *this;
	}

	template<typename T>
	inline void list<T>::push_front(const T& value)
	{
		node_t* new_node = new node_t(value);
		if (_head)
		{
			_head->_prev = new_node;
		}
		new_node->_next = _head;
		_head = new_node;
	}

	template<typename T>
	inline void list<T>::pop_front()
	{
		if (_head == nullptr) return;

		node_t* temp_node = _head;
		_head = _head->_next;
		_head->_prev = nullptr;
		delete temp_node;
	}

	template<typename T>
	inline void list<T>::push_back(const T& value)
	{
		node_t* new_node = new node_t(value);
		if (_head == nullptr)
		{
			_head = new_node;
		}
		else
		{
			node_t* tail_node = tail();
			tail_node->_next = new_node;
			new_node->_prev = tail_node;
		}

	}

	template<typename T>
	inline void list<T>::pop_back()
	{
		node_t* tail_node = tail();
		if (tail_node)
		{
			node_t* prev_node = tail_node->_prev;
			if (prev_node) prev_node->_next = nullptr;
			if (tail_node == _head) _head = nullptr;
			delete tail_node;
		}
	}

	template<typename T>
	inline void list<T>::remove(const T& value)
	{
		node_t* node = _head;
		while (node)
		{
			if (value == node->_value)
			{
				node_t* prev_node = node->_prev;
				node_t* next_node = node->_next;

				if (prev_node) prev_node->_next = next_node;
				if (next_node) next_node->_prev = prev_node;
				if (node == _head) _head = next_node;

				delete node;

				node = next_node;
			}
			else
			{
				node = node->_next;
			}
		}
	}

	template<typename T>
	inline void list<T>::reverse()
	{
		node_t* tail_node = tail();
		node_t* temp_node = nullptr;
		_head = tail_node;
		while (tail_node)
		{
			temp_node = tail_node->_prev;
			tail_node->_prev = tail_node->_next;
			tail_node->_next = temp_node;
			tail_node = temp_node;
		}
	}

	template<typename T>
	inline void list<T>::clear()
	{
		node_t* node = _head;
		while (node)
		{
			node_t* next_node = node->_next;
			delete node;
			node = next_node;
		}
		_head = nullptr;
	}

	template<typename T>
	inline size_t list<T>::size()
	{
		size_t count = 0;
		node_t* node = _head;
		while (node)
		{
			count++;
			node = node->_next;
		}
		return count;
	}

	template<typename T>
	inline void list<T>::write(std::ostream& stream)
	{
		node_t* node = _head;
		while (node)
		{
			stream << node->_value << " ";
			node = node->_next;
		}

		stream << std::endl;
	}

}