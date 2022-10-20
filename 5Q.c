#include<stdio.h>
int find(int arr[],int r){
    for(int i=0;i<r-1;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}
int main(){
    int r,arr[20];
    printf("Enter the range : ");
    scanf("%d",&r);
    printf("Enter the values : ");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",find(arr,r));
    return 0;
}
