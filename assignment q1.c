#include <stdio.h>

int main(){
    int n ;scanf("%d",&n);
    int a[n],b[n];
    for(int i=0 ;i<n;i++){
      scanf("%d",&a[i]); b[i]=0 ;
    }
    for(int j=0 ;j<n;j++){
        if(b[j]) continue ; // avoid counting repeating element 
         int count =1 ;
        for(int i=j+1 ;i<n;i++){
            if(a[i]==a[j]) {count++ ;
             b[i]=1 ; // alloting value 1 for all same elements as counted element 
             }
        }
        if(count> n/2) { printf("%d",a[j]) ; break ; }
    }

}