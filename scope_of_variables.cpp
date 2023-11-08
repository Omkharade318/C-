#include <iostream>
using namespace std;

int a = 10; //Global variable

void def()
{
    cout << a;
}

int main()
{
    int a = 6, b = 3; //local variable
    cout << a << b;
    def();
}