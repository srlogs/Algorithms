#include<iostream>
using namespace std;
int ternary(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid1=l+(r-l)/3;
        int mid2=mid1+(r-l)/3;
        if(arr[mid1]==x)
        {
            return mid1;
        }
        if(arr[mid2]==x)
        {
            return mid2;
        }
        if(arr[mid1]>x)
        {
            return ternary(arr,l,mid1+1,x);
        }
        if(arr[mid2]<x)
        {
            return ternary(arr,mid2-1,r,x);
        }
        return ternary(arr,mid1+1,mid2-1,x);
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,7},x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element to be searched\n";
    cin>>x;
    int result=ternary(arr,0,n,x);
    if(result!=-1)
    {
        cout<<"the element is found at  "<<result;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}







/*ternary search
it is efficient than the binary search
it is similar to the binary search even though 
*/