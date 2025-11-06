#include <iostream>
using namespace std;

int main() {
    int q,a[1000][1000];
    cout << "Kvadrat matritsa uchun qatorlar va ustunlar soni: ";
    cin >> q;

    for(int i = 0;i<q;i++) {
        for(int j = 0;j<q;j++) {
            cin >> a[i][j];
        }
    }

    int maxQ = a[0][0];
    int minU = a[0][0];
    int numQ=0,numU=0;
    for(int i = 0;i<q;i++) {
        for(int j = 0;j<q;j++) {
            if(a[i][j] > maxQ) {maxQ = a[i][j];numQ = i;}
            if(a[i][j] < minU) {minU = a[i][j];numU = j;}
        }
    }

    int res[1000];
    for(int i = 0;i<q;i++) {
        res[i] = a[numQ][i] * a[i][numU];
    }

    for(int i = 0;i<q;i++) {
        cout << res[i] << " ";
    }

    return 0;
}