#include<stdio.h>
void swap(int *,int *,int ,int );
int main(){
    int a[100]={8,6,4,2},b[100]={3,9,18,49},n=4,i,j,max; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]<b[j]){
                swap(a,b,i,j);
            }
        }
    }
    for(j=0;j<n-1;j++){
        for(i=j+1;i<n;i++){
            if(b[j]<b[i]){
                swap(b,b,i,j);
            }
        }

    }
    for(i=0;i<n;i++){
        a[n+i]=b[i];
    }
    for(i=0;i<2*n;i++){
        printf("%d ",a[i]);   
    }
    return 0;
}
void swap(int a[],int b[],int i,int j){
    int temp;
    temp=a[i];
    a[i]=b[j];
    b[j]=temp;
}
