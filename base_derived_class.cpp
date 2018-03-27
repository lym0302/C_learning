#include <iostream>

using namespace std;

// base-class Shape
class Shape
{
	public:
		void setWidth(int w){width = w;}
		void setHeight(int h){height = h;}
	protected:
		int width;
		int height;
};

// base_class Cost
class Cost
{
	public:
		int getCost(int area)
		{
			return area * 70;
		}
};

// derived-class
class Rectangle: public Shape, public Cost
{
	public:
		int getArea()
		{
			return (width * height);
		}
};

int main(void)
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);
	
	area = Rect.getArea();

	// output the area
	cout << "Total area: " << Rect.getArea() << endl;

	// output the cost
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;

}
