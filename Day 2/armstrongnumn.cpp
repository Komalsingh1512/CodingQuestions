#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //to check a number is armstrong or not 
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    //logic to check armstrong number
    int count = 0;
    int tempx = n;
    while(tempx != 0){
        count++;
        tempx = tempx / 10;
    }
    int sum = 0;
    tempx = n;
    while(tempx != 0){
        int digit = tempx % 10;
        sum = sum + (int)pow(digit, count);
        tempx= tempx / 10;
    }
    if(sum == n){
        cout << " The number is an armstrong number " << endl;
    }
    else{
        cout << " The number is not an armstrong number " << endl;
    }
    return 0;
}