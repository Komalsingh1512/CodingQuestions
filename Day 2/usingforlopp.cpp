#include <iostream>
using namespace std;
int main(){
    //print number 1 to 100
    for(int i =1; i<=100; i++){
        cout << i << " ";
    }
    cout <<" Now counting even number from 1 to 100 from for loop: " << endl;
    // print even number from 1 to 100
    for(int i =1; i<=100; i++){
        if(i%2==0){
            cout << i << " ";
        }
    }

    //print the even number using bitwise operator 
    cout <<" Now counting even number from 1 to 100 using bitwise operator: " << endl;
    for(int i =1; i<=100; i++){
        if(!(i&1)){
            cout << i << " ";
        }
    }

    //print the multiple of 3 from 1 to 100
    cout <<" Now counting multiple of 3 from 1 to 100 using for loop: " << endl;
    for(int i =1; i<=100; i++){
        if(i%3==0){
            cout << i << " ";
        }
    }
    return 0;
}