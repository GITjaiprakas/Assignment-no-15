#include<stdio.h>
void sort(int);
int main(){
    int r;
    printf("Enter the range : ");
    scanf("%d",&r);
    sort(r);
    return 0;
}
void sort(int r){
    int i,temp,arr[50],j;
    printf("Enter the values : ");
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<r-1;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
}

