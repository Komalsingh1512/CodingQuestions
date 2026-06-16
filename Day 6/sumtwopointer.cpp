#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8};
    int left =0;
    int right=nums.size()-1;
    while(left<right){
        int sum= left +right;
        if(sum==7){
            cout <<"found" <<endl;
            break;
        }else if(sum<7){
            left++;
        }else{
            right--;
        }
    }
    return 0;
}