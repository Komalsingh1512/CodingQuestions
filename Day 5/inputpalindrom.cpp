#include <iostream>
using namespace std;
int main(){
    string str;
    cout << " Enter a string: " <<endl;
    cin >>str;
    int start=0; 
    int n= str.length();
    int end= n-1;
    bool palindrom= true;
    while(start < end){
        if(str[start] !=str[end]){
            palindrom = false;
            break;
        }
        start++;
        end--;
    }
    if(palindrom){
        cout << " The string is palindrom";
    }else{
        cout << "The string is not palindrom";
    }
}

//