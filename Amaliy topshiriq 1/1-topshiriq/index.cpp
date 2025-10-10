#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,y,A,B;
    cout<<"x=";
    cin>>x;
    cout<<endl<<"y=";
    cin>>y;

    double cot_argument = y/(pow(x,2)+pow(y,2));
    double cot_step = cos(cot_argument)/sin(cot_argument);
    double ln_step = log(pow(x,2) + pow(y,2));
    double degree_argument = x*cot_step + y/2*ln_step;
    A = pow(degree_argument,3);

    double sin_step = pow(sin(pow(x,2) + pow(y,2)),2);
    double sqrt_step = sqrt(pow(x,2)+pow(y,2));
    double pace_step = sin_step + A + 7.6;
    double den_step = 3.2/10000 + 2*pow(x,2) + sqrt_step;
    B = pace_step/den_step;

    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
}