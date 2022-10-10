#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int hoare(int* arr, int l, int h)
{
    int i = l-1;
    int j = h+1;
    int p = arr[l];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<p);
        do{
            j--;
        }while(arr[j]>p);
        if(i>=j)
            return j;
        swap(arr[i], arr[j]);
    }
}
void qsort(int* arr, int l, int h)
{
    if(l<h)
    {
        int p = hoare(arr, l, h);
        qsort(arr, l, p);
        qsort(arr, p+1, h);
    }
}
void display(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
int p;
int arr[] = {5,3,8,4,2,7,1,10};
int n = sizeof(arr)/sizeof(arr[0]);
display(arr, n);
qsort(arr, 0, n-1);
display(arr, n);
}