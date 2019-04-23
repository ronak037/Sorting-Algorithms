/*
*****Code made by Ronak Mangal on 24-04-2019, Time = 02.03 A.M.
*/

/*
*****This is code to sort the elements by using the heap sort with time complexity of nlogn****
*/

#include <bits/stdc++.h>
using namespace std;

//Function to arrange elements in their correct position in heap
void heap(int a[], int size, int i)
{
    int largest, left, right;
    largest = i;//largest equal to root index
    left = 2 * i + 1;
    right = 2 * i + 2;

    //finding the index of large element from child of root node
    if (left < size && a[i] < a[left])
        largest = left;
    if (right < size && a[right] > a[largest])
        largest = right;

    //largest index should not be root index
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heap(a, size, largest);
    }
}

//heapsort function
void heapsort(int a[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heap(a, size, i);
    } //heap is completed now

    //storing the highest values in array and decrease the size of array to store these highest values
    for (int i = size - 1; i >= 0; i--)
    {
        swap(a[i], a[0]);
        heap(a, i, 0);
    } //sorting completed
}

//printing the sorted array
void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << "\t";
}

int main()
{
    int size;
    cout << "Enter how many elements you want to enter: ";
    cin >> size;
    int a[size];
    cout<<"Now enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    heapsort(a, size);
    print(a, size);
    cout << endl;
}