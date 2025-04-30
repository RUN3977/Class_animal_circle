#include <iostream>
using namespace std;

class Animal
{
public:
Animal();
~Animal();

private:
char name[20] = { 0 };
int age = 0;
string species = "";
};

Animal::Animal()
{
cout << "Animal constructor called" << endl;

}

Animal::~Animal()
{
cout << "Animal destructor called" << endl;
}

class Dog : public Animal
{
public:
Dog();
~Dog();

public:
void bark() 
{
	cout << "Woof! Woof!" << endl;
}
void color()
{
	cout << "The dog is brown." << endl;
}
void move()
{
	cout << "The dog is running." << endl;
}
};

Dog::Dog()
{
cout << "Dog constructor called" << endl;

}

Dog::~Dog()
{
cout << "Dog destructor called" << endl;
}

class Point
{
public:
double x, y;
Point(double x, double y) : x(x), y(y)
{
	cout << "Point constructor called" << endl;
}
~Point() { cout << "Point destructor called" << endl; }
};

class Circle : public Point
{
public:
double radius;
Circle(double x, double y, double radius) : Point(x, y), radius(radius)
{
	cout << "Circle constructor called" << endl;
}
~Circle() { cout << "Circle destructor called" << endl; }
void Move(double dx, double dy)
{
	x += dx;
	y += dy;
}
double Area()
{
	return 3.14 * radius * radius;
}
void Display()
{
	cout << "Circle area: " << Area() << endl;
	cout << "Circle center: (" << x << ", " << y << ")" << endl;
	cout << "Circle radius: " << radius << endl;
}
};

int main()
{
Circle circle(0.0, 0.0, 5.0);
circle.Move(1, 2);	
circle.Display();
cout << ".............................." << endl;
circle.radius = 10.0;
circle.Move(2, 3);
circle.Display();
cout << ".............................." << endl;
Dog dog;
dog.bark();
dog.color();
dog.move();
cout << ".............................." << endl;
return 0;
}