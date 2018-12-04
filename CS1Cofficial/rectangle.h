#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <QPen>
#include <QFont>
#include <QPainter>
#include "shape.h"


class Rectangle : public Shape
{
private:
    int x1;
    int y1; //(x1,y1) top left point
    int l; //length
    int w; //width
public:
    Rectangle() : Shape()
    {
        l = 0;
        w = 0;
    }
    Rectangle(int length, int width) : Shape()
    {
        l = length;
        w = width;
    }

    void setCord(int a1,int b1,int a2,int b2)
    {
        x1 = a1;
        y1 = b1;
        l = a2;
        w = b2;
    }
    void draw(QPainter &p)
    {
        p.setPen(getPen());
        p.setBrush(getBrush());
        QRect rect = QRect(x1, y1, l, w);
        p.drawRect(rect);

    }

    void move()
    {

    }

    void perimeter()
    {
      int p;
      p = (2*l) + (2*w);
      //cout << "The perimeter is: " << p << endl;
    }

    void area()
    {
      int a;
      a = l*w;
     // cout << "The area is: " << a << endl;

    
    }

    void getData()
    {
        //cout << "What is the length of the rectangle? ";
        //cin >> l;
        //cout << "What is the width of the rectangle? ";
        //cin >> w;
    }
    
    Rectangle(Rectangle &other) : Shape()
    {
        this->l = other.l;
        this->w = other.w;
    }
};

#endif // RECTANGLE_H
