#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
     int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
}
void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
void mergesort(int arr[],int l,int n)
{
    // cout<<l<<"\n"<<n<<"\n";
    if(l<n)
    {
        int m=l+(n-l)/2;
        // cout<<"calling function 1\n";
        mergesort(arr,l,m);
        // cout<<"function 2 is calling\n";
        mergesort(arr,m+1,n);
        // cout<<"function 3 is calling\n";
        merge(arr,l,m,n);
    }
}
int main()
{
    int arr[]={10,20,1,4,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    mergesort(arr,0,n-1);
    cout<<"after the sorting\n";
    print(arr,n);
    return 0;
}