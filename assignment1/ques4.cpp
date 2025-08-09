#include<iostream>
using namespace std;



void printArray(int arr[],int n){
    for(int i =0;i<n;i++ ){
        cout<<arr[i]<<" "<<endl;
    }
}

void reverseArray(){

    int size;
    cout<<"Please enter array size"<<endl;
    cin>>size;

    int arr[size];

    cout<<"Please enter array elements"<<endl;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    for(int i = 0, j = size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }



    cout<<"Reversed array is: "<<endl;
    printArray(arr,size);

}

void matrixMultiply(){
    int r1, c1, r2, c2;

    
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    
    if (c1 != r2) {
        cout << "Error: Number of columns of first matrix must equal rows of second matrix.\n";
        matrixMultiply();
    }

    
    int A[10][10], B[10][10], C[10][10];

    
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0; 
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "Result of multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
}

void transpose(){
    int rows, cols;
    int A[10][10], T[10][10]; 

    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Find transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            T[j][i] = A[i][j]; 
        }
    }

 
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {   
        for (int j = 0; j < rows; j++) {
            cout << T[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int choice;
    while(choice != 4){
    cout << "Menu:\n";
    cout << "1. Reverse a matrix\n";
    cout << "2. Multiply two matrices\n";
    cout << "3. Transpose a matrix\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case(1):
            reverseArray();
            break;
        case(2):
            matrixMultiply();
            break;
        case(3):
            transpose();
            break;
        case(4):
            cout<<"Thank you";
            break;
    }
    }
    


    return 0;

}