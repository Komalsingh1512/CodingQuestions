#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "abciiidEef";
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}