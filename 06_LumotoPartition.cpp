#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int lumoto(int arr[], int l, int h)
{
    int i = l-1;
    int p = arr[h];
    for (int j = 0; j < h; j++)
    {
        if(arr[j]<=p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
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
int arr[] = {5,1,4,7,2,3};
int n = sizeof(arr)/sizeof(arr[0]);
display(arr, n);
p = lumoto(arr, 0, n-1);
cout<<p;
getch();
return 0;
}