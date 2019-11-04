#include<iostream>
using namespace std;
int binary(int a[],int i,int r,int x)
{
    if(i<r)
    {
        int mid=i+(r-i)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        if(a[mid]>x)
        {
            return binary(a,i,mid-1,x);
        }
        if(a[mid]<x)
        {
            return binary(a,mid+1,r,x);
        }
    }
    return -1;
}
int exponential(int arr[],int n,int x)
{
    int i=1;
    if(arr[0]==x)
    {
        return 0;
    }
    while((i<n) && (arr[i]<=x))
        i=i*2;
     return binary(arr,i/2,min(i, n),x);
}

int main()
{
    int arr[]={2,3,4,5,6,7},x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element to be searched\n";
    cin>>x;
    int result=exponential(arr,n,x);
    if(result!=-1)
    {
        cout<<"the element is found at \t"<<result;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}








/*exponential search

    *it is mainly usefull for unbounded search
    *it has the time complexity of big o of 1
    *for binary it is big o of log N
    *here we are perfoming the binary search in an certain ranges 
    *using those ranges the search must be optimistic
*/