#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, remainder, num1, num2 = 0;

    cout << "I am going to help you find the GCD of two numbers." << endl << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 > num2)
    {
        dividend = num1;
        divisor = num2;
    }
    else
    {
        dividend = num2;
        divisor = num1;
    }

    do{
      remainder = dividend % divisor;

      if(remainder != 0)
            {
                dividend = divisor;
                divisor = remainder;
            }
    }while(remainder != 0); // This will loop until the remainder is 0.

    cout << "The GCD of " << num1 << " and " << num2 << " is " << divisor << "." << endl;
    return 0;
}

