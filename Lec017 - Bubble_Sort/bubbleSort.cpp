#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr ){
    int n = arr.size();
    for(int i = 0 ; i< n - 1; i++){
        bool swapped = false;
        for(int j = 0 ; j<(n-i-1) ; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
void printArray(vector<int> &arr){
    for(int i=0 ; i<arr.size() ; i++ ){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {5,6,9,1,2,4,10,11,3};
    bubbleSort(arr);
    printArray(arr);
    return 0;
}