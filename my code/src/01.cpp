#include<bits/stdc++.h>

using namespace std;



//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
	int l,b,h ;
public :
	Box ():l(0),b(0),h(0) {}
	Box (int l1,int b1, int h1):l(l1),b(b1),h(h1){}
	Box (Box &b )
	{
		this->l = b.l ;
		this->b = b.b ;
		this->h = b.h ;
	}

	int getB() const {
		return b;
	}

	int getH() const {
		return h;
	}

	int getL() const {
		return l;
	}
	long CalculateVolume ()
	{
		return (l*b*h) ;
	}
	bool operator<(Box& b)
	{
		if (this->CalculateVolume() < b.CalculateVolume() )
			return true ;
		else
			return false ;
	}
	friend ostream& operator<<(ostream& out, Box& B) ;
};
ostream& operator<<(ostream& out, Box& B)
{
	cout << B.l << " " << B.b << " " << B.h  ;
	return out ;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
