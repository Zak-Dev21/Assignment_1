
#include <iostream>
using namespace std;

int main()
{
    int num1 = 2;
    int num2 = 4;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << num1 << '\n';
    cout << num2 << '\n';

}

