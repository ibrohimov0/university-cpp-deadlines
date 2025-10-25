#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    double sum=1;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;

    for (int i = 1; i <= a; i++){
        double sum2=0;
        for(int m = 1; m <= b; m++){
            double st_step = pow(M_E,sqrt(pow(i,2) + pow(m,1-i)));
            double nd_step = (pow(i,2)+11)/(pow(m,4)+pow(i,-m));
            sum2 += st_step + nd_step;
        }
        sum *= sum2;
    }

    cout<<sum<<endl;
    return 0;
}