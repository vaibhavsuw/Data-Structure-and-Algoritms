#include <iostream>

using namespace std;

int LinearSearch(int arr[],int key,int ele)
{
    for(int i =0;i<ele;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    
    }
    return -1;
}

int main()
{
    int arr[] = {1,23,5,7,9,8};
    int ele = sizeof(arr)/sizeof(int);
    int key = 7;
    int index = LinearSearch(arr,key,ele);
    cout << index;

    return 0;
}
