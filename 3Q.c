#include<stdio.h>
void sort(int,int *);
int main(){
    int r,i,arr[50];
    printf("Enter the range : ");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    sort(r,arr);
     for(i=0;i<r;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int r,int arr[]){
    int i,temp,j;
    printf("Enter the values : ");
    for(i=0;i<r-1;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



