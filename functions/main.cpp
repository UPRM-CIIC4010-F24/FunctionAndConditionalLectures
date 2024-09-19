#include<iostream>
#include<vector>
using namespace std;

int suma(int a, int b=10);
int live_for_ever = 100;
struct Coordinates {
    float x, y;
};
class Triangle
{
private:
    /* data */
    Coordinates coords;
    float sideA;
    float sideB;
    float sideC;
public:
    Triangle(/* args */);
    Triangle(float a, float b, float c);
    Triangle(float a, float b, float c, float x, float y);
    ~Triangle(){};
    float getArea();
    float getPerimeter();
    float getSideA()const{
        return sideA;
    }
    float getSideB() const{
        return sideB;
    }
    float getSideC() const{
        return sideC;
    }
    void setSideA(int a) {sideA = a;}
    Coordinates getCoordinates() { return coords; }
    bool largerThan(Triangle t2);
    // Static methods
    static Triangle findLargest(Triangle triangles[], int size);
    // Overloading findLargest
    // static Triangle findLargest(std::vector<Triangle> triangles);
    // static float sumTriangles(std::vector<Triangle> triangles);
};
float Triangle::getPerimeter() {
    return sideA + sideB + sideC;
}
float Triangle::getArea() {
    float perimeter = getPerimeter();
    float semiPermimeter = perimeter/2;
    // Calculate area
    return sqrt(semiPermimeter*(semiPermimeter-sideA)*(semiPermimeter-sideB) * (semiPermimeter-sideC));
}

bool Triangle::largerThan(Triangle t2) {
    // Need the use of this to distinguish between 
    // The current instance and the parameter.
    return this->getArea() > t2.getArea();
}


/*
Static functions

These functions aren't called using an instance. These cam be used to 
apply operations that receive 
*/
Triangle Triangle::findLargest(Triangle triangles[], int size) {
    Triangle largest = triangles[0];
    for (int i = 1; i < size; i++) {
        if(triangles[i].largerThan(largest)) 
            largest = triangles[i];
    }
    return largest;
}
// Triangle Triangle::findLargest(vector<Triangle> triangles) {
//     Triangle largest = triangles[0];
//     for (int i = 0; i < triangles.size(); i++)
//     {
//         if(triangles[i].largerThan(largest))
//             largest = triangles[i];
//     }
//     return largest;
// }

Triangle::Triangle()
{
    sideA = 10;
    sideB = 10;
    sideC = 10;
}
Triangle::Triangle(float sideA, float b, float c) {
    cout << "in constructor" << live_for_ever << endl;
    this->sideA = sideA;
    sideB = b;
    sideC = c;
}

void changeSideA(Triangle &t, int size) {
  t.setSideA(size);
  return;
}
std::ostream& operator<<(std::ostream& out, const Triangle& triangle) {
    // Since triangle is a constant the methods it can access must be constant as well
    return out << "Triangle(" << triangle.getSideA() << ", " << triangle.getSideB() << 
  ", " << triangle.getSideC() << ")" <<std::endl;
}

/*
Triangle demostration
*/
void triangleDemostration() {
  cout << "in demonstration" << live_for_ever << endl;
  Triangle t1 = Triangle(2, live_for_ever, 4);
  Triangle t2 = Triangle(5, 2.5, 5);
  Triangle t3 = Triangle(10, 50, 20);
    
  cout << "Our triangles:\n";
  cout << t1 << endl;
  cout << t2 << endl;
  cout << t3 << endl;

  Triangle triArray[] = {t1, t2, t3};
  Triangle largestT1 = Triangle::findLargest(triArray, 3);
  cout << "The largest triangle is: " << largestT1 << endl;
}


// int suma(int a);

float getCircleArea(float radio) {
  return 3.14 * radio*radio;
}
float getCircleArea(float radio, float pi){
    return radio * radio * pi;
}

int mapValue(int i) {
  if(i < 10)
    return -100;
  else if(i < 20) 
    return 0;
  else if(i < 50)
    return 100;
  return 200;
}

int main() {
  cout << "in main" << live_for_ever << endl;
  triangleDemostration();
  int a = 29;
  Triangle t1;
  cout << t1 << endl;
  changeSideA(t1, a);
  cout << t1 << endl;

  cout << suma(1);
  int x = mapValue(-10);
  cout << x << endl;
  cout << mapValue(15) << endl;
  cout << mapValue(49) << endl;
  cout << mapValue(55) << endl;

}

int suma(int a, int b) {
  return a + b;
}

