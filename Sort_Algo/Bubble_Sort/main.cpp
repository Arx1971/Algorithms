#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void bubble_Sort(){

}

int main(){
	
	freopen("input.txt", "r", stdin);
	
	int n;
	
	int array[1000];
	
	cin >> n;
	
	for(int i=0; i<n; i++)
		cin >> array[i];
		
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			if(array[j]>array[j+1])
				swap(array[j],array[j+1]);
		}
	}
	for(int i=0; i<n; i++)
		cout << array[i] << " ";
		
	cout << endl;

}
