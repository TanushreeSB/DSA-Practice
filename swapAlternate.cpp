#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}


int main() {
	// your code goes here
	int even[6] = {1,3,5,6,8,9};
	int odd[5] = {2,5,6,8,9};
	
	swapAlternate(even,6);
	printArray(even,6);


    swapAlternate(odd,5);
    printArray(odd,5);
}


/*

Your Output
3 1 6 5 9 8 
5 2 8 6 9 

*/
