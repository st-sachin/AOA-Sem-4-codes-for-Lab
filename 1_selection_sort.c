#include <stdio.h>


void selection_sort(int arr[],int n){
  for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if ( arr[min]>arr[j] ) {
        min=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    
  }
}
int main() {
  printf("Hello World\n");
  
  int arr[9]={9,8,7,6,5,4,3,2,1};
  selection_sort(arr, 9);

  for(int i=0;i<9;i++){
    printf("%d ",arr[i]);
  }

  

  return 0;
}