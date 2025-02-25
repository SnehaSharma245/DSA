//using for loop
#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1 ; i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void printArray(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {4,7,1,3,0,10,8,9};
    insertionSort(arr);
    cout<<"Sorted array:- "<<endl;
    printArray(arr);

    return 0;
}