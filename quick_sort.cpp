#include<iostream>
using namespace std;

void quick(int a[],int size,int beg,int end,int *locptr)     //this function place 1st element on its right position
{                                           //i.e all small elements present in left of this and vice-versa
    int left,right,temp;
    left=beg;
    right=end;
    *locptr=beg;
step2:
    while(a[*locptr]<=a[right] && *locptr!=right)
    {
        right--;
    }
    if (right==*locptr) 
    {
        return;
    }
    if (a[*locptr]>a[right]) 
    {
        temp=a[*locptr];
        a[*locptr]=a[right];
        a[right]=temp;
        *locptr=right;
    }
    goto step3;
step3:
    while(a[*locptr]>=a[left] && left!=*locptr)
    {
        left++;
    }
    if (left==*locptr)
    {
        return;        
    }
    if(a[*locptr]<a[left])
    {
        temp=a[left];
        a[left]=a[*locptr];
        a[*locptr]=temp;
        *locptr=left;
    }
    goto step2;
}

void quick_sort(int a[],int size)
{
    int top=-1,beg,end,loc;
    int lower[size],upper[size];                    //stack maintainance of indexes of sublists created further
    if(size>1)
    {
        top++;
        lower[top]=0;
        upper[top]=size-1;
    }
    while(top!=-1)                                  //loop to create sublists and then sort it by calling "quick"
    {                                               //function many times as loop going on
        beg=lower[top];
        end=upper[top];
        top--;
        quick(a,size,beg,end,&loc);
        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
}

int main()
{
    int size;
    cout<<"Enter how many elements you want to enter:";
    cin>>size;
    int a[size];
    cout<<"Enter elements now:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    quick_sort(a,size);
    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
return 0;
}