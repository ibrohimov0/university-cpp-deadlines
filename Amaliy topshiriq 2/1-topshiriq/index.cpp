#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A,B,h;
    int m,k=1;
    cout<<"Iltimos boshlang'ich va oxirgi qiymatni gradusda kiriting: (π/2 --> 90)"<<endl<<"A=";
    cin>>A;
    cout<<"B=";
    cin>>B;
    cout<<"m=";
    cin>>m;

    h=A;
    while(k<=m) {
        if(k==m) h=B;
        cout<<"x=π/"<<180/h<<" | "<<"F(x)="<<sin(1/h*M_PI/180.0)<<endl;
        k++;
        h = (B - A)/(k-1);
    }
    return 0;
}