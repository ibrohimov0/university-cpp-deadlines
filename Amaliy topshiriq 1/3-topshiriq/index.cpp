#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,y,x,z;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"z=";
    cin>>z;

    if(z<1){
        x=pow(z,3)+0.2;
    }else{
        x=z+log(z);
    }

    double first_step=2*a*pow(sin(pow(x,2)),5);
    double second_step=pow(cos(pow(x,3)),2);
    y=first_step+second_step-b*x;

    cout<<"y="<<y;
    
    return 0;
}