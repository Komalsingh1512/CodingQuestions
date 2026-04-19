#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: "; // aaacbhcccccd
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '*') // if the character is already counted, skip it
            continue;
        int count = 1;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '*'; // mark the character as counted
            }
        }
        cout << str[i] << " occurs " << count << " times." << endl;
    }
    return 0;
}