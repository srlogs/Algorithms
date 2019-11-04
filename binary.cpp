#include<iostream>
using namespace std;
int binary(int a[],int i,int r,int x)
{
    if(i<r)
    {
        int mid=i+(r-i)/2;
        if(a[mid]==x)
        {
            return 1;
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
int main()
{
    int a[]={1,2,4,5,6,80},c;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter the number to be search";  
    cin>>c;
    int result=binary(a,0,n-1,c); 
    if(result==1)
    {
        cout<<"the element is found";
    }
    else
    {
        cout<<"the element is not found";
    }
    
    return 0;
}





/*the discription as follows:

    *in first step find the mid element
    *by using the mid element check whether the condition using the element to be find
    *if the element is present at the position of middle then return
    *if the element is greater than the middle call the function with respective values
    *if the element is smaller than the middle call the function with respective values
*/