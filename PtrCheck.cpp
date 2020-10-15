#include <iostream>

using namespace std;

int main(){
int size;

cout<< " enter the size : ";
cin>>size;

int arr[size];

for (int i=0; i<size; i++){
	cout<< " enter element "<<i+1<<" : ";
	cin>>arr[i];
}

for (int i=0; i<size; i++){
	cout<< arr[i]<<" ";
}
	
return 0;
}


