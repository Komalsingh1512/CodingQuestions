#include <iostream>
#include <vector>
using namespace std;
int main(){
   int n;
   cout << " Enter a number: ";
   cin >> n;
   if(n%2==0 || n%3==0 || n%5==0){
        return true;
   }else{
    return false;
   }
   return 0;
}