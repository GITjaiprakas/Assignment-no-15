#include<stdio.h>
void reverse(int r,int ary[]){
    for(int i=r-1;i>=0;i--){
        printf("%d ",ary[i]);
    }
}
int main(){
    int r,i,arr[50];
    printf("Enter the range of numbers : ");
    scanf("%d",&r);
    printf("Enter the numbers : ");
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    reverse(r,arr);
    return 0;
}
