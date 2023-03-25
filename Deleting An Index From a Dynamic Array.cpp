#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int size = 5;
	
	int *dynamicArray = new int [size]{23,34,45,56,67};
	
	//IM DELETING THE 2nd INDEX WHICH CONTAINS 45 IN IT ;
	//SO I WILL SHIFT THE INDEXES 1 TO THE LEFT BEING AT THAT INDEX;
	
	int indexToDelete = 2;
	
	for(int i=indexToDelete;i<size-1;i++){  
	
	//Making i is less then size-1 so that it doesnt go out of that value;
	
		dynamicArray[i] = dynamicArray[i+1];
		
	// This shifts the indexes to the left by 1 overwriting the index that we
	// want to delete;
	}
	
	size--; //As we have deleted 1 index decrementing 1 from the size of array;
	
	for(int i=0;i<size;i++){  //Printing the values
		cout<<dynamicArray[i]<<endl;
	}
	
	OUTPUT:
		23   34   56   67 
		
	
	return 0;
}