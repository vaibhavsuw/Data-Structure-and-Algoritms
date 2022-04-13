
#include <iostream>

using namespace std;

void printarr(int array[], int elements){
    for(int i = 0;i<elements;i++)
    {
        cout << array[i] << " ";
            
            
    }
    cout << endl;
}

int insertele(int array[],int Ele,int total,int insert,int at)
{
    if(Ele>=total)
    {
        return -1;
    }
    else
    {
        for(int i = Ele-1;i>=at;i--)
        {
            array[i+1] = array[i];
        }
        array[at] = insert;
        return 1;
    }

}


int main()
{
    int arr[100] = {1,3,5,7,9};
    int Elements = 5;
    printarr(arr, Elements);
    int insert = 15;
    int at = 3;
    int ret = insertele(arr,Elements,100,insert,at);
    Elements++;
    if(ret == -1)
    {
        cout << "Can't insert a element";
    }
    else if(ret == 1)
    {
        printarr(arr, Elements);
    }
    
    

    return 0;
}
