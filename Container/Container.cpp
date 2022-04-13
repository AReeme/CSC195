#include <iostream>
#include <array>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    //Built-In Static Array
    int n1[3]; // [int][int][int]
    n1[0] = 5;
    cout << n1[0] << endl;

    //Static Array Class
    array<int, 5> n2;
    n2[0] = 34;
    n2[1] = 10;
    cout << n2.size() << endl;

    //Dynamic Array
    vector<float> n3;
    cout << n3.size() << endl;
    n3.push_back(23);
    n3.push_back(35);
    n3.push_back(43);

    for (int i = 0; i < n3.size(); i++) // Counter
    {
        cout << n3[i] << endl;
    }
    for (auto i : n3) // Ranged Based
    {
        cout << i << endl;
    }

    cout << n3[2] << endl;
    cout << n3.size() << endl;

    n3.front(); //n3[0]

    //Stack
    stack<float> f1;
    f1.push(34.0f);
    f1.push(23.0f);
    f1.push(56.0f);
    f1.pop();
    cout << f1.top() << endl;

    //String
    string name = "Austyn";
    name[0] = 'M';
    cout << name << endl;

    //C String
    const char* str = "Reeme"; // 'R' 'e' 'e' 'm' 'e' '\0'
    //str[5] = 'R';
    cout << str << endl;
}