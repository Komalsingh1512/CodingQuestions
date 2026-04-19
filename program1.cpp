#include <iostream>
using namespace std;
int main()
{
    // by suing string
    string str;
    cout << "Enter a string: "; // komalkumarisingh
    cin >> str;
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch != 'a' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'e' && (ch != 'A' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'E'))
            result += ch;
    }
    cout << "String after removing vowels: " << result << endl; // kmlkmrsngh
    return 0;
}

// without using string
#include <iostream>
using namespace std;
int main()
{
    // by using character array
    char str[100];
    cout << "Enter a string: "; // komalkumarisingh
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch != 'a' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'e' && (ch != 'A' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'E'))
            cout << ch; // kmlkmrsngh
    }
    return 0;
}