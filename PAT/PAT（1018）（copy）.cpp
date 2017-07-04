#include <iostream>
using namespace std;

class B
{
public:
	int num;
	B():num(0){}
	void display()
	{
		cout<<"B";
	}
};

class C
{
public:
	int num;
	C():num(0){}
	void display()
	{
		cout<<"C";
	}
};

class J
{
public:
	int num;
	J():num(0){}
	void display()
	{
		cout<<"J";
	}
};

class NumCount
{
public:
	int win;
	int tie;
	int lose;
	B b;
	C c;
	J j;
	NumCount():win(0),tie(0),lose(0){}
	void display()
	{
		cout<<win<<' '<<tie<<' '<<lose<<endl;
	}
	void winrecord(char a)
	{
		if(a == 'B')
			++b.num;
		else if ( a == 'C')
			++c.num;
		else if ( a == 'J')
			++j.num;			
	}
	void windisplay()
	{
		if( b.num >= c.num && b.num >= j.num)
		{
			b.display();
		}
		else if ( c.num >= b.num && c.num >= j.num)
		{
			c.display();
		}
		else if ( j.num >= c.num && j.num >= c.num)
		{
			j.display();
		}
	}
};



bool comp(char a,char b)
{
	if( a == 'B')
	{
		if( b == 'C')
			return 1;
	}
	else if (a == 'C')
	{
		if ( b == 'J')
			return 1;
	}
	else if( a == 'J')
	{
		if ( b == 'B')
			return 1;
	}
	return 0;
}



int main()
{
	int n;
	cin >> n;
	NumCount J,Y; 
	char j,y;
	for (int i=0;i<n;++i)
	{
		cin >> j >> y;
		if( j == y )
		{
			++J.tie;
			++Y.tie;
		}
		else
		{
			if( comp(j,y) )
			{
				++J.win;
				++Y.lose;
				J.winrecord(j);
			}
			else
			{
				++Y.win;
				++J.lose;
				Y.winrecord(y);
			}
		}
	}
	J.display();
	Y.display();
	J.windisplay();
	cout<<' ';
	Y.windisplay();
	return 0;
}