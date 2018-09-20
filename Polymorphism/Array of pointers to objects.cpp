#include<iostream>
#include<string.h>
using namespace std;

class city
{
protected:
	char *name;
	int len;
public:
	city()
	{
		len=0;
		name= new char [len+1];
	}

	void getname()
	{
		char *s;
		s= new char[30];
		cout<<"Enter city name: ";
		cin>>s;
		len=strlen(s);
		name= new char[len+1];
		strcpy(name,s);
	}

	void printname()
	{
		cout<<name<<endl;
	}
};

int main()
{
	city *cptr[10];
	int n=0;
	int option;

	do
	{
		cptr[n]= new city;
		cptr[n]->getname();
		n++;
		cout<<"Do you want to add more names? (1/0) ";
		cin>>option;
	}while(option);

	cout<<endl<<endl;

	for(int i=0; i<n; i++)
		cptr[i]->printname();

	system("pause");
	return 0;
}


