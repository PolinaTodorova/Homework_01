
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Input the first real number: " ;
    cin >> num1 ;
    cout << "Input the second real number: " ;
    cin >> num2 ;
    cout << "Input the third real number: " ;
    cin >> num3 ;
    cout << "Input the fourth real number: " ;
    cin >> num4 ;
    cout << "Input the fifth real number: " ;
    cin >> num5 ;
    	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 )
    		{
    			cout << "The biggest real number is: " <<  num1 << endl;
    		}
    	else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 )
    		{
    			cout << "The biggest real number is: " <<  num2 << endl;
    		}
    	else if (num3 > num2 && num3 > num2 && num3 > num4 && num3 > num5 )
    		{
    			cout << "The biggest real number is: " <<  num3 << endl;
    		}
    	else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 )
    		{
    			cout << "The biggest real number is: " <<  num4 << endl;
    		}
    	else
    		{
    			cout << "The biggest real number is: " << num5 << endl;
    		}

    return 0;
}
