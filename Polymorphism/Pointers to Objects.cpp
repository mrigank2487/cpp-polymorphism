#include<iostream>
using namespace std;

class item
{
	int code;
	float price;
public:
	void getdata(int a, float b)
	{
		code=a;
		price=b;
	}

	void show()
	{
		cout<<"Code: "<<code<<endl;
		cout<<"Proce: "<<price<<endl;
	}
};

const int size=2;

int main()
{
	item *p = new item[size];
	item *d=p;
	int x,i;
	float y;

	for(i=0; i<size; i++)
	{
		cout<<"Enter code and price for item: "<<i+1<<endl;
		cin>>x>>y;
		p->getdata(x,y);
		p++;
	}

	for(i=0; i<size; i++)
	{
		cout<<"Item: "<<i+1<<endl;
		d->show();
		d++;
	}

	system("pause");
	return 0;
}

