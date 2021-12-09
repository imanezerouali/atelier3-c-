#include <iostream>

using namespace std;
//definir la classe shape 
class Shape
{
protected:
  float x, y;
public:
  Shape(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
};
//la sous-classe rectangle de la classe shape
class Rectangle: public Shape
{
public:
  Rectangle(float _x, float _y) : Shape(_x, _y) {}

  float area() 
  {
    return (x * y);
  }
};
//la sous-classe triangle de la classe shape
class Triangle: public Shape
{
public:
  Triangle(float _x, float _y) : Shape(_x, _y) {}

  float area()
  {
    return (x * y / 2);
  }
};

int main (){
   
  Rectangle rectangle(5,4);
  Triangle triangle(7,2);
  cout << rectangle.area() << endl;   
  cout << triangle.area() << endl;      
  return 0;

}
