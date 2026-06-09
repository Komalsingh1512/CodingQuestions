#include <iostream>
using namespace std;
int main()
{
    // reversing an array
    int arr[5] = {20, 45, 82, 2, 80};
    int n = 5;
    for (int i = 0; i < n / 2; i++) // loop will only run 2 times because we are swapping the first and last element, then the second and second last element, and so on. After n/2 iterations, the array will be fully reversed.
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) // to print the reversed array
    {
        cout << arr[i] << " ";
    }
    return 0;
}

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

#include <iostream>
using namespace std;
int main()
{
    // to reverse an array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
