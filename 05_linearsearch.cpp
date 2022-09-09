#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int linearSearch(int* arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x)
            return i;
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
int pos = linearSearch(arr, n, x);
if(pos==-1)
    printf("Not Present");
else
    printf("Present at index %d", pos);
getch();
return 0;
}