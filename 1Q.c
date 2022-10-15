#include<stdio.h>
int find_great(int arr[],int j){
    int great=arr[0],i=1;
    while(i<j){
        if(great<arr[i]){
            great=arr[i];
        }
        i++;
    }
    return great;
}
int main(){
    int a[1000],i=0;
    printf("Enter the values in array : max values(1000) enter 0 to stop : ");
    while(i<1000){
        scanf("%d",&a[i]);
        if(a[i]==0)
            break;
        i++;
    }
    printf("%d",find_great(a,i));
    return 0;
}
