#include<iostream>
using namespace std;

void bubble_srt(int arr[],int size)
{
    int temp;
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<=size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int size;
    cout<<"Enter how many elements you want to enter:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubble_srt(arr,size);
    cout<<endl;
    return 0;
}