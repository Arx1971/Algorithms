#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

int binary_search(int a[],int n,int left,int right){

	int mid = (left+right)/2;
	
	if(left>right) return -1;
	else{
		if(a[mid] == n) return mid+1;
		else if(a[mid]<n) return binary_search(a,n,mid+1,right);
		else if(a[mid]>n) return binary_search(a,n,left,mid-1);
	}
}

int main(){

	freopen("input.txt","r",stdin);	
	
	int tc,a[100];
	
	cin >> tc;
	
	for(int i=0; i<tc; i++) cin >> a[i];
	
	sort(a,a+tc);
	
	for(int i=0; i<tc; i++) cout << a[i] << " ";
	
	cout << endl;
	
	int n;
	
	cin >> n;
	cout << "The numeber We Looking For: " << n << endl;; 
	int pos = binary_search(a,n,0,tc-1);
	
	cout << "Position IS: " << pos << endl;
	
	cout << endl;
	
	return 0;
}
