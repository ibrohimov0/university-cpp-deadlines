#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    double sum=1;
    cout << "a=";
    cin >> a;

    for (int n = 1; n <= a; n++){
        sum *= 1/(pow(n,4)+1);
    }

    cout<<sum<<endl;
    return 0;
}