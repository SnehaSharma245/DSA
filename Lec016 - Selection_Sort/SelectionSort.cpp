#include<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int> arr){
    int n = arr.size();
 
    for(int i=0 ; i<n-1 ; i++){
        int minIndex= i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

void printArray(vector<int> arr){
    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {5,3,6,9,10,1,2};
    vector<int> newArr = selectionSort(arr);
    printArray(newArr);

    return 0;
}