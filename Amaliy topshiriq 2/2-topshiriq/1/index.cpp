#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    double sum=1;
    cout << "a=";
    cin >> a;

    for (int n = 1; n <= a; n++){
        double st_step = pow(n,2) + pow(9,-n);
        double nd_step = pow(M_E,-n) + pow(n,pow(n,-n));
        sum *= st_step / nd_step;
    }

    cout<<sum<<endl;
    return 0;
}