#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

void get_prime(bool sieve[],int n){
	
	for(int i=0; i<=n; i++) sieve[i] = true;
	
	for(int i=2; i<=n; i++){
		for(int j=2*i; j<=n; j+=i) sieve[j] = false;
	}

}

int main(){

	freopen("output.txt","w",stdout);
	
	int n = 1000000;
	
	bool a[n+5];
	
	get_prime(a,n);
	
	for(int i=2; i<=n; i++){
		if(a[i] == true) cout << i << " ";
	}
	cout << endl;
	
	return 0;
}
