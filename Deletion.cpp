#include <iostream>

using namespace std;
void display(int arr[], int ele)
{
    for(int i=0;i<ele;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Deletion(int arr[],int index,int ele)
{
    for(int i=index;i<ele-1;i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[100] = {1,3,5,7,9};
    int ele = 5;
    display(arr,ele);
    int index = 2;
    Deletion(arr,index,ele);
    ele--;
    display(arr,ele);

    return 0;
}
