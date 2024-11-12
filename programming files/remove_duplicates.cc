#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*  Remove_Duplicates
    Requires: vector, removed elements vector
    Returns: duplicates removed vector
*/
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    vector<int> unique_arr;
    // sort
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // loop to add non duplicated numbers to array or delete ones duplicated
    for(int i=0; i<n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        else{
            removed_elements.push_back(arr[i]);
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
