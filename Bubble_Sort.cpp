#include<iostream>
using namespace std;

void bubble_srt(int arr[],int size)
{
    int temp;
    for(int i=1;i<size;i++)
    {
        int flag=0;
        for(int j=0;j<=size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //if swapping take place update flag =1
                flag=1;             
            }
        }
        //if swapping has not taken place that means array is sorted so we can break the loop
        if(!flag)
            break;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int size;
    cout<<"Enter how many elements you want to enter: \n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubble_srt(arr,size);
    cout<<endl;
    return 0;
}
