#include <iostream>

using namespace std;

int BinarySearch(int arr[], int key, int total)
{
    int low=0;
    int high=total-1;
    int mid = (low+high)/2;
    
    while(low<=high){
    if(arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid]<key)
    {
        low = mid+1;
        mid = (low+high)/2;
    }
    else
    {
        high = mid-1;
        mid = (low+high)/2;
    }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,5,7,9,11,17};
    int total = sizeof(arr)/sizeof(int);
    int key = 22;
    int index = BinarySearch(arr,key,total);
    cout << index;

    return 0;
}
