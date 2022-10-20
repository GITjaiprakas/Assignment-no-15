#include<stdio.h>
void rotate(int *,int);
int main(){
    int r,arr[30],i;
    printf("Enter the range : ");
    scanf("%d",&r);
    printf("Enter the values : ");
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    rotate(arr,r);
    for(i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void rotate(int ary[],int r){
    int n,i=r-1,temp,d;
    printf("By how many positions you want to rotate the numbers : ");
    scanf("%d",&n);
    printf("Enter the direction 1=left/0=right : ");
    scanf("%d",&d);
    d==1?(n=n):(n=n+1);
    while(n){
        temp=ary[0];
        i=1;   
        while(i<r){
            ary[i-1]=ary[i];
            i++;
        }
        ary[r-1]=temp;
        n--;
    }
}

