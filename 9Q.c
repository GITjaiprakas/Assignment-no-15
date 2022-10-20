#include<stdio.h>
void sort(int a[],int b[],int n,int m);
void merge(int a[],int b[],int m,int n);
void swap(int a[],int b[],int i,int j);
int main(){
    int a[100]={1,4,7,8,10},b[100]={2,3,9},n=5,m=3,i;
    sort(a,b,n,m);
    merge(a,b,m,n);
    for(i=0;i<n+m;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int a[],int b[],int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i]>b[j]){
                swap(a,b,i,j);
            }
        }
    }
    for(i=0;i<m-1;i++){
        if(b[i]>b[i+1]){
            swap(b,b,i,i+1);
        }
    }
}
void swap(int a[],int b[],int i,int j){
    int temp;
    temp=a[i];
    a[i]=b[j];
    b[j]=temp;
}
void merge(int a[],int b[],int m,int n){
    int i=0;
    while(i<m){
        a[n+i]=b[i];
        i++;
    }
}
