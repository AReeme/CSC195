#include <iostream>

int main()
{
    /*int Function1(const int& i)
    {
        i = i * 2;
    }*/

    void Function2(int& i)
    {
        i = i * 2;
    }

    void Function3(int i)
    {
        i = i * 2;
    }

    int main()
    {
        int i = 10;
        // function calls
        Function2(i);
        // what is the value of i now?
    }
}
