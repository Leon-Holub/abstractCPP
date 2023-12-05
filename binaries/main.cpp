#include <iostream>
#include <cmath>
#include <Vector.h>
#include <Point.h>

using namespace std;

// abstract vector, umi scitat
// ma x,y

// EVektor, podedi scitani

int main() {

    //Vector
    EVector(5, 5);
    auto ev = EVector(5, 5) + EVector(1, 1);

    cout << ev << endl;

    //Point
    Point point = Point(2, 2);
    EVector v = EVector(3, 3);
    Point point2 = point + v;
    cout << point2 << endl;

    float dist = Point::distance(point2, Point(2, 2));//point2 - Point(2, 2);
    cout << dist << endl;

    EVector pointDist = point2 - Point(2, 2);
    float otherDist = EVector::norm(pointDist);
    cout << otherDist << endl;

    return 0;
}