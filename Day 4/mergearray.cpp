#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums1= {1,2,3,4,5,0,0,0,0,};
    vector<int>nums2= {6,7,8,9};
    for(int i=0; i<nums2.size(); i++)
    nums1.push_back(nums2[i]);
    // nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    cout << "Merged Vector: ";

    for(int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    return 0;
}


