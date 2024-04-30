#include<iostream>
using namespace std;

int main()
{
    char choice;
    do
    {
        int num1, num2;
        float x;
        char op;
        cout << "Menu:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "Enter your choice ('x' to continue and 'y' to exit): ";
        cin >> choice;
        if(choice == 'y')
        {
            cout << "Exiting...";
            break;
        }
        else{
        cout << "Enter first numbers: ";
        cin >> num1;
         cout << "Enter second numbers: ";
        cin >> num2;
        cout << "Enter operator: ";
        cin >> op;
        switch (op)
        {
            case '+':
                x = num1 + num2;
                cout << "Result: " << x << endl;
                break;
            case '-':
                x = num1 - num2;
                cout << "Result: " << x << endl;
                break;
            case '*':
                x = num1 * num2;
                cout << "Result: " << x << endl;
                break;
            case '/':
                if (num2 == 0)
                {
                    cout << "ERROR! Division by zero is not possible." << endl;
                }
                else
                {
                    x = num1 / num2;
                    cout << "Result: " << x << endl;
                }
                break;
            case '%':
                x = num1 % num2;
                cout << "Result: " << x << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }
      }
    } while (true);


    return 0;
}

