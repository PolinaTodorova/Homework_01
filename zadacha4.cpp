#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Input the first number: " ;
    cin >> num1 ;
    cout << "Input the second number: " ;
    cin >> num2 ;
    int z = (num1 > num2 ? num1 : num2);
    cout << "z = " << z << endl;
    cout << ( z > 0 ? z : z*(-1)) << endl ;


    return 0;
}
