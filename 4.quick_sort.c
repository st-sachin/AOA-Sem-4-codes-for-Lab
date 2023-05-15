//Quicksort

#include<stdio.h>
#include<stdlib.h>

int partition(int arr[],int start,int end){

    int pivot=arr[end];
    int index=start;

    for(int i=start;i<end;i++){
        if(arr[i]<pivot){
            int temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;

            index++;
        }
    }
    int temp=arr[end];
    arr[end]=arr[index];
    arr[index]=temp;

    return index;
}
void quicksort(int arr[],int start,int end){
    if(start<end){
        int index=partition(arr ,start,end);
        quicksort(arr,start,index-1);
        quicksort(arr,index+1,end);
    }
}

int main(){

    int n=5;

    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}