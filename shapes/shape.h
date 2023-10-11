#ifndef SHAPE
#define SHAPE

class Rectangle
{
private:
public:
    double length;
    double width;
    // Constructor
    // Rectangle(double len, double wid) : length(len), width(wid) {}
    Rectangle()
    {
        double length = 0;
        double width = 0;
    }

    // Member functions
    double getArea()
    {
        return length * width;
    }

    double getPerimeter()
    {
        return 2 * (length + width);
    }
};

#endif