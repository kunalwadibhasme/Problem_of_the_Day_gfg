QUICK SORT
Quick Sort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot.
Given an array arr[], its starting position is low (the index of the array) and its ending position is high(the index of the array).
Note: The low and high are inclusive.
Implement the partition() and quickSort() functions to sort the array.
Example 1:

Input: 
N = 5 
arr[] = { 4, 1, 3, 9, 7}
Output:
1 3 4 7 9

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
A Function to print an array / 
void printArray(int arr[], int size) 
{
    int i;
    for (i=0; i < size; i++) 
        printf("%d", arr[i]);
    printf("\n");
}

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void swap(int *a,int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
    
    int quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
       {
           int pi = partition(arr,low,high);
           quickSort(arr,low,pi-1);
           quickSort(arr,pi+1,high);
       }
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int i = low-1;
        int pivot = arr[high];
        for(int j=low;j<=high;j++)
        {
            if(arr[j]< pivot)
            {
                i++;
                swap(&arr[i],&arr[j]);
            }
            
        }
        swap(&arr[i+1],&arr[high]);
        return (i+1);
    }
};
