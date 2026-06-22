#include <iostream>
using namespace std;
int main()
{
    // reversing the numbers
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;     // to get the last digit
        rev = rev * 10 + digit; // to add the digit to the reversed number
        n = n / 10;             // to remove the last digit from the original number
    }
    cout << "Reversed number: " << rev << endl;
    return 0;
}