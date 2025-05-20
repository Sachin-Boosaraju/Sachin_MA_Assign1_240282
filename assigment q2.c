#include <stdio.h>
 int f (int a ,int b){
    return (a>b)?a:b ;
 }
int main(){
    int n,x ; scanf("%d",&n);
     int nums[n],c[n] ;
     for(int i =0 ;i<n;i++){
        scanf("%d",nums+i); *(c+i)= *(nums+i) ;
     }
   for(int j=0 ; j<n;j++){
    int sum = nums[j] ; 
     for(int i =j+1 ;i<n;i++){
         sum+=nums[i] ;
         c[j]= f(c[j] ,sum) ; }
//  this  c[j] gives maximum sum of sub array starting with a[j] element  
    if(j==0) x=c[j];
    else x=f(x,c[j]); // gives overall sum of largest sum subarray 
   }
   printf("%d",x);
}