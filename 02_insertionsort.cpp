#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insert(int arr[], int i)
{
    while(i!=0&&arr[i-1]>arr[i])
    {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        i--;
    }
}
void insertionSort(int arr[], int n)
{
    if(n==1) return;
    for(int i=1;i<n;i++)
        insert(arr,i);

}
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
insertionSort(arr, n);
display(arr, n);
getch();
return 0;
}