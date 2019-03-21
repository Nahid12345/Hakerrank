#include<bits/stdc++.h>
using namespace std;


int main() {

	int n, max = 0, amount=0;

	cin >> n;
    int ar[n];
	for( int i=0; i<n; i++ ) {
		cin >> ar[i];

		if( ar[i] > max ) {
			max = ar[i];
			amount = 1;
		}
		else if( ar[i] == max )
			amount++;
	}

	cout << amount;


	return 0;
}
