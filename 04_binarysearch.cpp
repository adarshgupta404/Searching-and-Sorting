#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int binarySearch(int* arr, int n, int x)
{
    int l = 0;
    int h = n-1;
    int mid = (l+h)/2;
    while (l<=h)
    {
        mid = (l+h)/2;
        if(arr[mid]>x)
            h = mid - 1;
        else if(arr[mid]<x)
            l = mid + 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
int x;
printf("\nEnter the element to be searched: ");
scanf("%d", &x);
int pos = binarySearch(arr, n, x);
if(pos==-1)
    printf("Not Present");
else
    printf("Present at index %d", pos);
getch();
return 0;
}