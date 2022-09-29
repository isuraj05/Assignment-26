#include<iostream>
using namespace std;

class Counter
{
	private:
		static int count;
	public:
		Counter(){ count++; }
		
		int getCount() { return count; }
};
int Counter::count=0;
int main()
{
	Counter c1,c2,c3,c4,c5;
	cout<<"Counter is -> "<<c1.getCount();
	return 0;
}
