#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

// It is based on the rule of Divide and Conquer
// It is known as partition-exchange sort

int n = 6;
int k = 1;
void quick_sort(int arr[],int low, int hi){

	int i = low, j = hi;
	
	int pivot = arr[(i+j)/2];

	int temp ;
	
	while(i<=j){
	
		while(arr[i] < pivot) i++;
		while(arr[j] > pivot) j--;
		
		if(i<=j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		for(int l = 0; l<n; l++)	
			cout << arr[l] << " " ;		// How Array are changing, It will print the elements of array after everytime recursive function
											// Finish. 
		cout << endl;
		cout << "End of my LIne:" << endl;
		k++;
	
	}
		
	if(j>low) quick_sort(arr,low,j);
	
	if(i < hi) quick_sort(arr,i,hi);

}



int main(){

	int arr[100] = {3,4,2,1,5,0};
	
	quick_sort(arr,0,n-1);
	
	for(int i=0; i<n; i++){
		
		cout << arr[i] << " " ;	
		
	}
	cout << endl;
	return 0;
}
