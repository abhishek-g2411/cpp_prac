#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num[]={12,21,3,4,-56, 56};
	int size = 6;
	
	int smallest = INT_MAX;
	int largest = INT_MIN;
	
	for(int i=0;i<size ;i++){
	    smallest= min (num[i], smallest);
	    largest= max  (num [i], largest);
	    
	    
	}

	cout<<"smalllest number ="<< smallest<<endl;
	cout<<"largest number ="<< largest <<endl;

}