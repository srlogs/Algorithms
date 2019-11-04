#include<iostream>
using namespace std;
int interpolation(int arr[],int n,int x)
{
    int lo=0,hi=n-1;
    while( (lo<=hi) && (x<arr[hi]) && (x>arr[lo]))
    {
        if(lo==hi)
        {
            if(arr[lo]==x)
            {
                return lo;
            }
            return -1;
        }
        int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo])); 
        if(arr[pos]==x)
        {
            return pos;
        }
        if(arr[pos]>x)
        {
            lo=pos+1;
        }
        else
        {
            hi=pos-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,7},x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter the element to be searched\n";
    cin>>x;
    int result=interpolation(arr,n,x);
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









/*interpolation search

    *in this search we are find the position depends upon the search element
    *it is efficient than binary search
    