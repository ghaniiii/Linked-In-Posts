#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int size = 5;
	
	int *dynamicArray = new int [5];   //Declare A Dynamic Array Of A Size;
	
	for(int i=0;i<size;i++){
		cin>>dynamicArray[i];    //Enter The Values In A Dynamic Array;
	}
	
	int newSize = 10;
	
	int *newDynamicArray = new int [newSize];  //Now Im Changing the Size Of the Array To new size : 10;
	
	for(int i=0;i<size;i++){
		newDynamicArray[i] = dynamicArray[i];  //transferring the old values into the new array; 
	}
	
	delete []dynamicArray;					  //Deleting this array to save memory but we will use it again in this programme; 
	
	for(int i=size ; i<newSize ; i++){
		cin>>newDynamicArray[i];       //Now Entering the Values On the Indexes That Are Empty In New Array;
	}
	
	dynamicArray = newDynamicArray;     // Alloting the address of the new bigger sized array to the old one;
										// like this we have changed the size of the dynamic array;
	
	delete []newDynamicArray;			//Deleting the new Array as its purpose is finished we only wanted to increase
										// the size of our previous array.
										
	for(int i=0;i<newSize;i++){
		cout<<"Index "<<i+1<<" Has : "<<dynamicArray[i]<<endl;
	}
	
	return 0;
}