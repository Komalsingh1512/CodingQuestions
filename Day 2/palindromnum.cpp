#include <iostream>
using namespace std;
int main(){
    //to check th enumber is palindrome or not 
    int n; 
    cout << " Enter a palindrome number: " << endl;
    cin >>n;
    int rev=0;
    int original = n;
    while(n!=0){
        int digit= n%10;
        rev = rev *10 + digit;
        n = n/10;
    }
    if(original == rev){
        cout << " The number is a palindrome number " << endl;
    }
    else{
        cout << " The number is not a palindrome number " << endl;
    }
    return 0;
}