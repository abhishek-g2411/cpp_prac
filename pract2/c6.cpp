#include <iostream>
using namespace std;
int main(){

    int arr[]={24,45,84,65,48,4};
    int n;
    cout<<"enter the key: ";
    cin>>n;
    int key;
    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<< "found";
             break;
        

        }
    }

}


