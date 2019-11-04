#include<iostream>
using namespace std;
void swap(int *a1,int *a2)
{
    int temp=*a2;
    *a2=*a1;
    *a1=temp;
}
void bubble(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{
    int arr[]={10,20,1,4,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    bubble(arr,n);
    cout<<"after the sorting\n";
    print(arr,n);
    return 0;
}