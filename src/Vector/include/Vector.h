//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_VECTOR_H
#define INC_28_11_2023_VECTOR_H


#include <iostream>
#include <AbstractVector.h>

class EVector : public AbstractVector<EVector> {

public:
    float _x, _y;


    EVector(float x, float y) {
        _x = x;
        _y = y;
    }

    float scalar(const EVector &other) const {
        return _x * other._x + _y * other._y;
    }

    EVector operator+(const EVector &other) const {
        return EVector(_x + other._x, _y + other._y);
    }

    friend std::ostream &operator<<(std::ostream &os, const EVector &other) {
        os << other._x << other._y;
        return os;
    }
};

#endif //INC_28_11_2023_VECTOR_H
