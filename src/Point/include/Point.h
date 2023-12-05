//
// Created by leonh on 05.12.2023.
//

#ifndef INC_28_11_2023_POINT_H
#define INC_28_11_2023_POINT_H

#include <AbstractEuclideanPoint.h>
#include "../../Vector/include/Vector.h"

class Point : public AbstractEuclideanPoint<Point, EVector> {
public:
    float x, y;

    Point(float x, float y) {
        this->x = x;
        this->y = y;
    }

    EVector operator-(const Point &other) const override {
        return {x - other.x, y - other.y};
    }

    Point operator+(const EVector &vector) const {
        return {x + vector._x, y + vector._x};
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &point) {
        os << "[" << point.x << "," << point.y << "]";
        return os;
    }


};


#endif //INC_28_11_2023_POINT_H
