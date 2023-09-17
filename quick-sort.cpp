#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int i = low+1;
    int pivot = arr[low];
    for(int j=i; j<=high;j++)
    {
        if(arr[j]<=pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[low],arr[i-1]);
    return i-1;
}
void quickSort(int arr[], int low, int high){
    if(low < high){
        int indexofpivot = partition(arr,low,high);
        quickSort(arr,low,indexofpivot-1);
        quickSort(arr, indexofpivot+1, high);
    }
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT:" << endl;
    cin >> n;
    int arr[n];
    int low = 0;
    int high = n-1;
    cout << "ENTER THE ELEMENTS:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    quickSort(arr,low,high);
    cout << "THE SORTED ELEMENTS ARE:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}