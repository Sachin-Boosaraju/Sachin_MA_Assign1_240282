#include <bits/stdc++.h>
using namespace std ;
int f(int l , int r, int k){
    int L = r-l+1 ; int m = (l+r)/2 ;
    if(L<k) return 0 ; // if length is less than k (laziness number)
    else if(L%2 == 0) return f(l,m,k)+f(m+1,r,k) ;// if length is even 
    else return m+f(l,m-1,k)+f(m+1,r,k) ; // 
}

int main(){
    int t,n,k ;
    cin>> t ;
    while(t--){
    cin>>n>>k ;
    cout<< f(1,n,k)<<endl ;
    }
return 0 ;
}