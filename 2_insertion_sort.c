

#include <stdio.h>

void insertion(int arr[],int n){
  
  for(int i=1;i<n;i++){
    
    int value=arr[i];
    int hole=i;

    while(hole >0 && arr[hole-1]>value){
      arr[hole]=arr[hole-1];
      hole--;
      
    }
    arr[hole]=value;
  }

}
int main(void) {

    int arr[]={9,8,7,6,5};
    insertion(arr, 5);

    for(int i=0;i<5;i++){
      printf("%d ",arr[i]);
    }
   
  
  return 0;
}