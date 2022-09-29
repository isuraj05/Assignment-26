	#include<iostream>
	using namespace std;
	
	class Cube
	{
		private:
			int side,vol;
		public:
			Cube(int s){ side=s; }
			
			void setCube() { }
			int getCube() { }
			
			void calCubeVol()
			{
				vol=side*side*side;
			}
			int getCubeVol() { return vol; }
	};
	
	int main()
	{
		Cube c1(7);
		c1.setCube();
		c1.calCubeVol();
		cout<<"Volume of the cube is "<<c1.getCubeVol();
		return 0;
	}
