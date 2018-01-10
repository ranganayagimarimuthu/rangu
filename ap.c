#include <stdio.h>
#include <conio.h>
int findMissing(int arr[], int low, int high, int diff)
{
     
    if (high <= low)
        return INT_MAX;
  

    int mid = low + (high - low)/2;
  
    if (arr[mid+1] - arr[mid] != diff)
        return (arr[mid] + diff);
  
  
    if (mid > 0 && arr[mid] - arr[mid-1] != diff)
        return (arr[mid-1] + diff);
  
    if (arr[mid] == arr[0] + mid*diff)
        return findMissingUtil(arr, mid+1, high, diff);
  
    return findMissingUtil(arr, low, mid-1, diff);
}
  
 
int findMissingTerm(int arr[], int n)
{
     
    int diff = (arr[n-1] - arr[0])/n;
  
    return findMissing(arr, 0, n-1, diff);
}

