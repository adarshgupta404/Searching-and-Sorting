#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void merge (int arr[], int l, int m, int r)
{
  int n1 = m - l + 1, n2 = r - m;
  int left[n1], right[n2];

  for (int i = 0; i < n1; i++)
    left[i] = arr[l + i];
  for (int i = 0; i < n2; i++)
    right[i] = arr[m + 1 + i];

  int i = 0, j = 0, k = l;

  while (i < n1 and j < n2)
    {
      if (left[i] <= right[j])
	arr[k++] = left[i++];
      else
	arr[k++] = right[j++];
    }

  while (i < n1)
    arr[k++] = left[i++];
  while (j < n2)
    arr[k++] = right[j++];
}

void mergeSort (int arr[], int l, int r)
{
  if (l < r)
    {
      int mid = (l + r) / 2;
      mergeSort (arr, l, mid);
      mergeSort (arr, mid + 1, r);
      merge (arr, l, mid, r);
    }
}

void display (int *arr, int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
}

int main ()
{
  int arr[] = { 5, 1, 4, 7, 2, 3 };
  int n = sizeof (arr) / sizeof (arr[0]);
  printf("Before Sorting: ");
  display (arr, n);
  rintf("After Sorting: ");
  mergeSort (arr, 0, n - 1);
  display (arr, n);
}
