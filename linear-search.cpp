#include <iostream>
using namespace std;

int linearSearch(int arr[], int query){
    int i = 0;
    while(true){
        if(arr[i] == query){
            break;
        }
        else {
            i++;
        }
    }
   return i; 
}

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS:" << endl;
    cin >> n;
    int arr[n];
    cout << "ENTER ELEMENTS:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int query;
    cout << "ENTER QUERY ELEMENT:" << endl;
    cin >> query;
    int index = linearSearch(arr, query);
    if(index == -1){
        cout << "QUERY NOT FOUND" << endl;
    }
    else {
        cout << "INDEX OF QUERY IS " << index << endl;
    }
    

    return 0;
}