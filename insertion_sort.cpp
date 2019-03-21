#include<iostream>
using namespace std;

void insertion_srt(int arr[],int size)
{
    for(int i=1;i<size;i++)                                //insertion sort algorithm
    {
        int j,min;
        min=arr[i];
        for(j=i-1;j>=0 && min<arr[j];j--)                  //actually we compare 1st two elements in one whole loop
        {                                                  //then compare 1st 3 elements in next loop and so on.
           arr[j+1]=arr[j];
        }
        arr[j+1]=min;
    }
}

int main()
{
    int size;
    cout<<"Enter how many elements you want to enter:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in array: ";
    for(int i=0;i<size;i++)                                 //loop for taking input in array
    {
        cin>>arr[i];
    }
    insertion_srt(arr,size);                                //calling insertion function
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";                                 //printing sorted array
    }
    cout<<"\n";
    return 0;
}