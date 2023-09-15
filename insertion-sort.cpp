#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        for(int j = i-1; j >= 0; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT:" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertionSort(arr, n);
    cout << "THE SORTED ELEMENTS ARE:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}