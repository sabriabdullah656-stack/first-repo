#include <iostream>
using namespace std;

int main()
{
    int choice;
    float pkr, result;

    cout << "===== Currency Converter =====" << endl;
    cout << "1. Convert PKR to USD" << endl;
    cout << "2. Convert PKR to EUR" << endl;
    cout << "3. Convert PKR to GBP" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in PKR: ";
    cin >> pkr;

    switch(choice)
    {
        case 4:
            result = pkr / 280;   
            cout << "USD = " << result << endl;
            break;

        case 3:
            result = pkr / 330;   
            cout << "EUR = " << result << endl;
            break;

        case 2:
            result = pkr / 380;   
            cout << "GBP = " << result << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
