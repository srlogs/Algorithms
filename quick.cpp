#include<iostream>
using namespace std;
void swap(int *a1,int *a2)
{
    int temp=*a2;
    *a2=*a1;
    *a1=temp;
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quick(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
        quick(arr, low, pi - 1); 
        quick(arr, pi + 1, high); 
    } 
} 
void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        quick(arr,0,n-1);
        print(arr,n);
    }
    return 0;
}
