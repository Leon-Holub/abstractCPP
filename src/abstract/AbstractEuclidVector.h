//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_ABSTRACTEUCLIDVECTOR_H
#define INC_28_11_2023_ABSTRACTEUCLIDVECTOR_H

#include "../interface/VectorAddable.h"
#include "../interface/VectorScalarable.h"
#include <cmath>

template<class T>
class AbstractEuclidVector : public VectorAddable<T>, VectorScalarable<T> {
public:
    static float norm(const T &other) {
        return sqrt(other.scalar(other));
    }

    static float angle(const T &first, const T &second) {
        return acos(first.scalar(second) / norm(first) * norm(second));
    }
};

#endif //INC_28_11_2023_ABSTRACTEUCLIDVECTOR_H
