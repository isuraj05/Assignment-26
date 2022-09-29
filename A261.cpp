#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
		void setData(int real,int imag)
		{
			a=real;
			b=imag;
		}
		
		void showData()
		{
			cout<<a<<"+"<<b<<"i"<<endl;
		}
		
		Complex add(Complex c)
		{
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main()
{
	Complex c1,c2,c3;
	
	c1.setData(5,3);
	c1.showData();
	
	c2.setData(2,3);
	c2.showData();
	
	c3=c1.add(c2);
	c3.showData();
	return 0;
}
