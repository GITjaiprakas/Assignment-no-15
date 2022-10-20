#include<stdio.h>
void count(int *);
int main(){
    int arr[10]={2,2,3,4,5,2,5,2,15,2};
    count(arr);
    return 0;
}
void count(int arr[]){
    int i=0,count=0,j,unique[10]={1,1,1,1,1,1,1,1,1,1};
    for(i=0;i<9;i++){
        if(unique[i]==0){
            continue;
        }
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                unique[i]=unique[j]=0;
            }
        }
        if(unique[i]==1){
            printf("%d ",arr[i]);
        }
    }
}
