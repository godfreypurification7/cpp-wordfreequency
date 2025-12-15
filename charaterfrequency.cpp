#include<iostream>
#include<cstring>
#include<cstdlib>   // for system()
using namespace std;

int main()
{
    string s;
    char k; 
    int i, c = 0;

    // -------- BLACK BLANK DISPLAY --------
    system("cls");   // Clears screen (black blank display)

    cout << "\nEnter String : ";
    cin >> s;

    cout << "\nEnter Character (a-z) : ";
    cin >> k;

    // -------- PROCESS --------
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == k)
            c++;
    }

    // -------- OUTPUT --------
    cout << "\nThe Word is : " << s;
    cout << "\nThe repeated character is : " << k;
    cout << "\nThe character '" << k << "' occurs " << c << " times" << endl;

    return 0;
}

