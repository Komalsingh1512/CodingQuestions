#include <iostream>
using namespace std;
int main(){
    //printing numbers from 1 to 100 using while loop
    int i =1;
    while(i<=100){
        cout << i << " ";
        i++;
    }

    //print even number using while loop
    cout <<" Now counting even number from 1 to 100 using while loop: " << endl;
    int x=1;
    while(x<=100){
        if(x%2==0){
            cout << x << " ";
        }
    }
}