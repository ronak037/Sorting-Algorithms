#include<iostream>
using namespace std;

//funciton of modified bubble sort
void modified_bubble_srt(int arr[],int size)
{
    int temp,flag;
    for(int i=1;i<size;i++)
    {
        flag=0;
        for(int j=0;j<=size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)                                  //flag used to terminate loop faster in best case i.e. if array is already sorted
            return;
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
    modified_bubble_srt(arr,size);                      //calling modified bubble sort function
    for(int i=0;i<size;i++)                             //loop to give output
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}