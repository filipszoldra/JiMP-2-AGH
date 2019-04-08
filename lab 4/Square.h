#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;
class Square{
	public:
		struct Point{
			double x, y;
		};
		Square (double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
		double obwod (const Square &other) const;
		double pole (const Square &other) const;
	private:
		Point a, b, c, d;
};
#endif  // SQUARE_H
