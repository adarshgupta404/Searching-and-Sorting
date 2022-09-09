#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

int select(int arr[], int start, int end)
{
    int max = start;
    for(int i=start; i<=end; i++)
    {
        if(arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int lastIndex = n - i - 1;
        int maxIndex = select(arr, 0, lastIndex);
        swap(arr, maxIndex, lastIndex);
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
selectionSort(arr, n);
display(arr, n);
getch();
return 0;
}