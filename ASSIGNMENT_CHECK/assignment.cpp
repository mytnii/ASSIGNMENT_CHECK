#include<iostream>

class Point
{
	int x;
	int y;
public:
	int get_x()const
	{
		return x;
	}

	int get_y()const
	{
		return y;
	}

	void set_x(int x)
	{
		this->x = x;
	}

	void set_y(int y)
	{
		this->y = y;
	}


	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Point()
	{

	}

	~Point()
	{

	}

	Point operator=(const Point& point)
	{
		this->x = point.x;
		this->y =point.y;

		return *this;
	}

	void print()const
	{
		std::cout << "X = " << x << "\t"
			<< "Y = " << y << std::endl;
	}
};

void main()
{
	using namespace std;

	Point A, B, C;

	A = B = C = Point(2, 3);

	A.print();
	B.print();
	C.print();
}