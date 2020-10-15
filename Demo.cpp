#include <iostream>
#include <string>

using namespace std;

struct node{
	int no;
	string name;
	int marks[2];
};

int main()
{
	node myStudents[1];
	int counter = 0;
	int len = sizeof(myStudents)/sizeof(myStudents[0]);
	while (counter < 1)
	{
	
	cout<<"Enter the number of student "<<counter+1<<": ";
	cin>>myStudents[counter].no;
	cout<<"\nEnter the name of the student "<<counter+1<<": ";
	cin>>myStudents[counter].name;
	cout<<"\nEnter the mark 1 of student "<<counter+1<<": ";
	cin>>myStudents[counter].marks[0];
	cout<<"\nEnter the mark 2 of student "<<counter+1<<": ";
	cin>>myStudents[counter].marks[1];
	counter++;
	}
	
	cout<<"\nThe student details are: "<<myStudents[0].no<<" "<<myStudents[0].name<<" "<<myStudents[0].marks[0] <<myStudents[0].marks[1];
	
	return 0;
}
