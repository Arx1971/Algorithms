#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

void merge(int a[], int leftstart,int middle,int rightend){
	
	int leftend = middle-leftstart + 1;
	int rightstart = rightend - middle;
	
	int L[leftend],R[rightstart];
	
	for(int i=0; i<leftend; i++) L[i] = a[leftstart+i];
	for(int j=0; j<rightstart; j++) R[j] = a[middle+j+1];
	
	int left = 0;
	int right = 0;
	int index = leftstart;
	
	while(left<leftend and right<rightstart){
		
		if(L[left]<=R[right]) a[index++] = L[left++];

		else a[index++] = R[right++];
	}
	while(left<leftend){
		a[index++] = L[left++];
	}
	while(right<rightstart){
		a[index++] = R[right++];
	}

}

void merge_sort(int a[],int leftstart,int rightend){

	if(rightend<=leftstart) return;
	
	int middle = (leftstart+rightend)/2;
	merge_sort(a,leftstart, middle);
	merge_sort(a,middle+1, rightend);
	merge(a,leftstart,middle,rightend);
}

int main(){
	
	freopen("input.txt", "r",stdin);
	
	int a[10000];
	
	int n,tc;
	
	srand(time(0));

    	for(int i=0; i<10000; i++)
       	a[i] = rand() % 100-20;
	
	for (int i=0; i<10000; i++) cout << a[i] << " " ;
	
	cout << "\nResult: " << endl;
	merge_sort(a,0,10000-1);
	
	for (int i=0; i<10000; i++) cout << a[i] << " " ;
	
	cout << endl;
		
	return 0;
}
