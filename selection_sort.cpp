#include<iostream>
using namespace std;

void selection_srt(int arr[],int size)
{
    int min,index,j;
    for(int i=0;i<size;i++)
    {
        index=i;
        min=arr[i];
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];                           //searching for minimum element in array
                index=j;
            }
        }
        arr[index]=arr[i];
        arr[i]=min;                             //place it in 1st position then in 2nd loop at 2nd position and so on
    }
}

int main()
{
    int size;
    cout<<"Enter how many elements you want to enter:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selection_srt(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}