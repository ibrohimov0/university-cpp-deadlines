#include <iostream>
using namespace std;

bool isPalindrom(string s) {
    int len = s.length();
    for(int i = 0;i<len/2;i++) {
        if(s[i] != s[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string a,b,c;
    cin >> a >> b >> c;
    
    cout << (isPalindrom(a) ? "Ha" : "Yo'q") << endl;
    cout << (isPalindrom(b) ? "Ha" : "Yo'q") << endl;
    cout << (isPalindrom(c) ? "Ha" : "Yo'q") << endl;

    return 0;
}