#include<stdio.h>
void unique(int r,int ary[]){
    int j,i,count;
    for(j=0;j<r;j++){
        count=0;
        for(i=0;i<r;i++){
            if(ary[j]==ary[i]){
                ++count;
                if(count>1)
                break;
            }
        }
        if(count==1){
            printf("%d ",ary[j]);
        }
    }
}
int main(){
    int r,ary[100],i;
    printf("Enter the range of numbers : ");
    scanf("%d",&r);
    printf("Enter the numbers : ");
    for(i=0;i<r;i++){
        scanf("%d",&ary[i]);
    }
    unique(r,ary);
    return 0;
}
