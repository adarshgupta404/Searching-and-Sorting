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

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
                swap(&arr[j+1], &arr[j]);
        }  
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
bubbleSort(arr, n);
display(arr, n);
getch();
return 0;
}