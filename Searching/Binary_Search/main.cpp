/*
	Binary Search code
*/

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int b_search(int arr[],int num,int size_arr){
	
	int high = size_arr - 1;
	int low = 0;
	int mid;
	
	while(low<=high){
	
		mid = (high+low)/2;
	
		if(arr[mid] == num)
			return mid;
			
		else if(num > arr[mid])
			low = mid + 1;
			
		else if(num < arr[mid])
			high = mid - 1;
	
	}
	
	return -1;

}


int main(){
	
	
	int num,arr[100];
	
	
	int test_case;
	
	cin >> test_case;
	
	for(int i=0; i<test_case; i++){
	
		cin >> arr[i];
	
	}
	
	sort(arr,arr+test_case);
	
	cout << "Please Enter The number You Looking For: " << endl;
	
	cin >> num;
	
	int pos = b_search(arr,num,test_case);
	
	if(pos != -1)
		cout << "The number Positon is " << pos << endl;
		
	else
		cout << "Number Error: " << endl;
		
	
	return 0;

}
