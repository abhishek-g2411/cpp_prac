


#include <bits/stdc++.h>
using namespace std;

int main() {

int nums[]={45,65,75,98,-135};
int smallest=INT_MAX;
int index=-1;
for(int i=0;i<5;i++){
    smallest=min(nums[i],smallest);
    
}
cout<< smallest;
}