#include <stdio.h>
int main(){
    int a[]={39,39,20,10,20,30,20,80,80},n=9,i,j,count=0;
    for(i=0;i<n-1;i++){
        if(a[i]!=0){
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=0;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
