#include<stdio.h>

int binary_search(int arr[],int s,int e,int value){

    int mid=(s+e)/2;

    while(s<e){
        if(arr[mid]==value){
                return mid;
        }
        else if (arr[mid]>value){
                e=mid-1;
        }
        else{
                s=mid+1;
        }

        mid=(s+e)/2;
    }

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int value=4;
    int ans=binary_search(arr,0,8,value);
    printf("The position of 4 is :%d",ans);

}
