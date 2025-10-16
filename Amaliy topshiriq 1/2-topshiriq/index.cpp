#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,y,x;
    cout<<"a=";
    cin>>a;
    cout<<"x=";
    cin>>x;
    if(a > 5){
        y = a/(pow(a,2)+x);
    } else{
        y = 1/(2*pow(a,3)+sin(a));
    }
    cout<<y;
    return 0;
}