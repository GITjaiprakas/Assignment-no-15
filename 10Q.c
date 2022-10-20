#include<stdio.h>
void freq(int ary[],int r){
    int count,j,i;
    for(i=0;i<r-1;i++){
        count=0;
        for(j=i+1;j<r;j++){
            if(ary[i]==ary[j]){
                count++;
            }
        }
        printf("the frequency of %d is %d\n",ary[i],count);
    }
}
int main(){
    int r,arr[20],i;
    printf("Enter the range : ");
    scanf("%d",&r);
    printf("Enter the numbers : ");
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    freq(arr,r);
    return 0;
}
