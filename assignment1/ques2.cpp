#include<bits/stdc++.h>
using namespace std;

int A[50];
int size =0;
int sizeA = 0;

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void findDuplicate(int arr[]){
    int idx =0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j] && arr[j] != 1001){
                A[idx++] = j;
                sizeA++;
                arr[j] = 1001;
            }
        }
    }
}

void Delete(int arr[],int pos){
    for(int i = pos;i<size-1;i++){
		arr[i] = arr[i+1];
	}
	
	size--;
}


int main(){

    
    cout<<"Enter size of array\n";
    cin>>size;
    
    int arr[size];
    cout<<"Enter array elements: \n";

    for(int i =0; i<size;i++){
        cin>>arr[i];
    }

    findDuplicate(arr);
    sortDescending(A,sizeA);
    for(int i =0; i<sizeA;i++){
        Delete(arr,A[i]);
    }

    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }



    

    return 0;
}