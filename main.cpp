#include <iostream>
#include <iomanip>
#include "math.h"

using namespace std;

float f(float e){
    float d;
    d = e*e* cos(e)+1;
    return d;
}

int main() {
    float a,b,c,d,x,y,err;
    bool tag = false;
    do{
    cout << "Inserire estremi" << endl;
    cin>>a>>b;
    c = f(a);
    d = f(b);}
    while((c*d) >= 0);

    do{
       x = (a+b)/2;
       y = f(x);
       if(y != 0){
           if((c*y) < 0){
               b=x;
           }else{
               a=x;
           }
           err = abs((b-a)/2);
       }
       else{
           tag = true;
       }

    }while(err >= 1e-6);

    if((err < 1e-6)||(tag == true)){
        cout<<fixed<<setprecision(3)<<x<<endl;
    }
    return 0;
}














