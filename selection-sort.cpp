#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        int min_idx = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
            if (min_idx != i) {
                int temp = arr[i];
                arr[i] = arr[min_idx];
                arr[min_idx] = temp;
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
    selectionSort(arr, n);
    cout << "THE SORTED ELEMENTS ARE:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}