#include<stdio.h>

    int arr[120];

    int min;
    int max;
    void min_max(int i,int j){

        if(i==j){
            min=arr[i];
            max=arr[i];
            return ;
        }
        if(i==j-1){
            if(arr[i]>arr[j]){
                max=arr[i];
                min=arr[j];
            }
            else{
                 max=arr[j];
                min=arr[i];
            }
        }
        else{
            int mid=(i+j)/2;
            min_max(i,mid);
            int min1=min;
            int max1=max;
            min_max(mid+1,j);
            int min2=min;
            int max2=max;

            if(min1<min2){
                min=min1;
            }
            else{
                min=min2;
            }

            if(max1<max2){
                max=max2;
            }
            else{
                max=max1;
            }
        }
    }
 
int main(){

    int size;
    printf("Enter the size of string\n");
    scanf("%d",&size);
    printf("Enter the element  of string\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min_max(0,4);
    printf("****************");
    printf("The maximum value is %d :",max);
    printf("The minimum value is %d :",min);
    

}
