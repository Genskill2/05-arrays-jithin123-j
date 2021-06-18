/* Enter your solutions in this file */
#include <stdio.h>


int max (int arr[], int n)  {

  for (int i=0;i<n-1;i++)  {
    int swap = 0;
    for (int j=0;j<n-i-1;j++) {
      if (arr[j]>arr[j+1])  {
        int t = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = t;
        swap=1;
      }
    }
    if (swap==0)
      break;
  }
  int max = arr[n-1];  
  return max;
}

int min (int arr[], int n)  {

  for (int i=0;i<n-1;i++)  {
    int swap = 0;
    for (int j=0;j<n-i-1;j++) {
      if (arr[j]>arr[j+1])  {
        int t = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = t;
        swap=1;
      }
    }
    if (swap==0)
      break;
  }
  int min = arr[0];
  return min;
}

float average (int arr[], int n)  {

  for (int i=0;i<n-1;i++)  {
    int swap = 0;
    for (int j=0;j<n-i-1;j++) {
      if (arr[j]>arr[j+1])  {
        int t = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = t;
        swap=1;
      }
    }
    if (swap==0)
      break;
  }
  int sum = 0;
  for (int i=0;i<n;i++)
    sum=sum+arr[i];
  float avg = (float)sum/n;
  
  return avg;
}
