#include<iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    string s = "aabbccc";

map<char,int> freq;

for(char ch:s)
{
    freq[ch]++;
}

for(auto p:freq)
{
    cout<<p.first<<" "
        <<p.second<<endl;
}
}