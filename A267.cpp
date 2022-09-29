#include<iostream>
using namespace std;

class Box
{
	private:
		int length,breadth,height,vol;
	public:
		Box(int l,int b,int h) { length=l; breadth=b; height=h; }
		
		void setData() { }
		
		void calBoxVol()
		{
			vol=length*breadth*height;
		}
		int getBoxVol() { return vol; }
};

int main()
{
	Box b1(5,7,2);
	b1.setData();
	b1.calBoxVol();
	cout<<"Volume of the box is "<<b1.getBoxVol();
	return 0;
}
