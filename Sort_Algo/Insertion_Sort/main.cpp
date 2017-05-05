#include <iostream>
#include <cmath>

using namespace std;

void insertion_sort(int a[],int n){

	for(int i=1; i<n; i++){
		
		int j = i - 1;
		
		while(j>0 and a[j-1] > a[j]){
			
			swap(a[j],a[j-1]);
			j--;
		}
		
	}

}

int main(){

	int n;
	
	int a[100] = {4,6,1,8,9,0,1};
	
	insertion_Sort(a,7);
	
	for(int i = 0; i<7; i++)
		cout << a[i] << " " ;

}
