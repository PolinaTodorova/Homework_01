#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Input the first number: " ;
    cin >> num1 ;
    cout << "Input the second number: " ;
    cin >> num2 ;
    cout << "Input the third real number: " ;
    cin >> num3 ;

    	if (num1 > 0 && num2 > 0 && num3 > 0 )
    		{
    			cout << " + " << endl;
    		}
    	else if (num1 < 0 && num2 > 0 && num3 > 0 || num2 < 0 && num1 > 0 && num3 > 0 || num3 < 0 && num2 > 0 && num1 > 0)
    		{
    			cout << " - " << endl;
    		}
        else if (num1 < 0 && num2 < 0 && num3 > 0 || num2 < 0 && num3 < 0 && num1 > 0 || num1 < 0 && num3 < 0 && num2 > 0)
           {
                cout << " + " << endl;
           }
        else if ( num1 < 0 && num2 < 0 && num3 < 0)
           {
            cout << " - " << endl;
           }
    	else if (num1 == 0 || num2 == 0 || num3 == 0)
    		{
    			cout << " 0 " << endl;
    		}

    return 0;
}
