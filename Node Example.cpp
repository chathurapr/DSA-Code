#include <iostream>
#include <string>
using namespace std;

struct node{
	int no;
	string name;
	int mark[2];
};

int main(){
	
	node myStudents[2];
	int counter;
	
	while(counter < 2){
		cout<<"Enter the no of student "<<counter + 1<<":";
		cin>>myStudents[counter].no;
		cout<<"\nEnter the name of student "<<counter + 1<<":";
		cin>>myStudents[counter].name;
		cout<<"\nEnter the subject 1's mark of student "<<counter + 1<<":";
		cin>>myStudents[counter].mark[0];
		cout<<"\nEnter the subject 2's mark of student "<<counter + 1<<":";
		cin>>myStudents[counter].mark[1];
		
		counter++;
	}
	
	cout<<"\nThe details are "<<myStudents[0].no<<" "<<myStudents[0].name<<" "<<myStudents[0].mark[1];
	
	return 0;
}
