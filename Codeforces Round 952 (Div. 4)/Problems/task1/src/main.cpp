/**
Accomplished using the JetBrains Academy plugin by JetBrains https://plugins.jetbrains.com/plugin/10081-jetbrains-academy

 To modify the template, go to Preferences -> Editor -> File and Code Templates -> Other
*/

#include <iostream>
using namespace std;

int main() {
    // Write your solution here
    int t;
    do {
        cin >> t;
    } while (t < 1 || t > 100);

    while (t--)
    {
        string a,b;
        cin >> a >> b;

        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << " " << b << endl;
    }
    return 0;
}
