#include<bits/stdc++.h>
using namespace std;


int size =0;
int A[50];



void create(int n){
	size =n;
	cout<<"Enter array elements: "<<endl;
	for(int i =0;i<n;i++){
		cin>>A[i];
	}
}

void display(){
	if(size == 0){
		cout<<"Error! Create an array first";
	}
	
	for(int i=0; i<size; i++){
		cout<<A[i]<<" ";
	}
}

void insert(){
	int pos = 0;
	int element = 0;
	
	if(size == 0){
		cout<<"Error! Create an array first";
	}
	
	cout<<"Enter index: \n";
	cin>>pos;
	cout<<"Enter element: \n";
	cin>>element;
	
	
	
	for(int i=size-1;i>=pos;i--){
		A[i+1] = A[i];
	}
	A[pos] = element;
	
	
	size++;
	cout<<"New array"<<endl;
	display();
}

void Delete(){
	int pos = 0;
	if(size == 0){
		cout<<"Error! Create an array first";
	}
	cout<<"Enter index: \n";
	cin>>pos;
	
	
	for(int i =pos;i<size-1;i++){
		A[i] = A[i+1];
	}
	
	size--;
	
	cout<<"New array"<<endl;
	display();
}

int linearSearch(){
	int target = 0;
	if(size == 0){
		cout<<"Error! Create an array first";
	}
	cout<<"Enter Target"<<endl;
			cin>>target;
	
	for(int i =0; i<size; i++){
		if(A[i] = target){
			cout<<"Index is: "<<i<<endl;
			
		}
	}
	
}



int main(){
	int value =0;
	
	
	
	if(value>6){
		cout<<"Please select valid serial number";
	}
	
	while(value != 6){
		cout<<"---MENU---\n 1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.LinearSearch\n 6.Exit\n";
		cin>>value;
		
		switch(value){
		case(1):
			cout<<"Enter array size"<<endl;
			cin>>size;
			create(size);
		case(2):
			display();
			break;
		case(3):
			insert();
			break;
		case(4):
			Delete();
			break;
		case(5):
			linearSearch();
			break;
		case(6):
			cout<<"Thank You";
			break;	
	}
	}
				
	return 0;
}