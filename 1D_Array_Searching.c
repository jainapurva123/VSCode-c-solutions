#include <stdio.h>
int main()
{
  int arr[100],n,i,key;
  int low,high,mid;
  int linearFound=-1,binaryFound=-1;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements in sorted order:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter elements to search: ");
  scanf("%d", &key);
  for(i=0;i<n;i++)
  {
    if(arr[i]==key){
      linearFound = i;
      break;
    }
  }
  low=0;
  high=n-1;
  while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==key){
      binaryFound = mid;
      break;
    }
    else if (key < arr[mid]){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  if(linearFound !=-1)
     printf("\nLinear Search: Element found at index %d\n, linearFound");
  else 
     printf("\nLinear Search: Element not found at index %d\n, linearFound");
  if (binaryFound !=-1)
      printf("\nBinary Search: Element found at index %d\n, BinaryFound");
  else 
      printf("\nBinary Search: Element not found at index %d\n, BinaryFound");
  return 0;

}