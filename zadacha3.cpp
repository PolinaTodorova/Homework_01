#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Input the first number: " ;
    cin >> num1 ;
    cout << "Input the second number: " ;
    cin >> num2 ;
    	cout << ( (num1 + num2) % 2 == 0 ? (num1 + num2) * 2 : (num1 + num2) / 2 ) << endl;

    return 0;
}

