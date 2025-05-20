#include <bits/stdc++.h>
using namespace std ;

int main(){
    int m,n ;
    cin>>m >>n ;
    double k = pow(m,1.0/n);
    if(fabs(k- round(k) )<1e-9) cout<< (int)round(k) ;
    else cout<< -1 ;
}