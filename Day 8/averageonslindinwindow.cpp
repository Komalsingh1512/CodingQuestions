#include <iostream>
#include <vector>
using namespace std;
 int main(){
    vector<int>nums= {1,12,-5,-6,50,3};
    long long  sum =0;
    int k =4; 
    double maxavg=0;
    for(int i=0; i<k; i++){
        sum+= nums[i];
    }
    maxavg= sum/(k*1.0);
    double avg=maxavg;
    for(int i=k; i<nums.size(); i++){
        sum = sum -nums[i-k]+nums[i];
        avg=sum/(k*1.0);
        maxavg=max(maxavg, avg);
    }
    cout <<maxavg;
 }