#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Prime number" << endl;
    else
        cout << "Not a Prime number" << endl;

    //to find out the prime number within a range
     int start, end;
    cin >> start >> end;

    for(int num = start; num <= end; num++) {

        if(num <= 1)
            continue;

        int count = 0;

        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                count++;
                break;
            }
        }

        if(count == 0)
            cout << num << " ";
    }
    return 0;
}