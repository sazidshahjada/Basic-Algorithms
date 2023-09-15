#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    bubbleSort(arr, n);
    cout << "THE SORTED ELEMENTS ARE:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}