#include <iostream>
#include <cmath>
using namespace std;

double HandMadeFactorial(double a) {
    //Gamma usuli bilan hisoblash
    double res = sqrt(2*M_PI*a)*pow(a/M_E,a);
    return res;
}

double BuiltInFactorial(double a) {
    return tgamma(a + 1);
}

int SimpleFactorial(int a) {
    if(a<= 1) return 1;
    return a * SimpleFactorial(a - 1);
}

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    
    cout << HandMadeFactorial(a)<<endl;
    cout << BuiltInFactorial(b)<<endl;
    cout << SimpleFactorial(c)<<endl;

    return 0;
}