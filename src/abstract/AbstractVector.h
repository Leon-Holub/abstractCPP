//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_ABSTRACTVECTOR_H
#define INC_28_11_2023_ABSTRACTVECTOR_H

#include "../interface/Addable.h"
#include "../interface/Scalarable.h"
#include <cmath>

template<class T>
class AbstractVector : public Addable<T>, Scalarable<T> {
public:
    static float norm(const T &other) {
        return sqrt(other.scalar(other));
    }

    static float angle(const T &first, const T &second) {
        return acos(first.scalar(second) / norm(first) * norm(second));
    }
};

#endif //INC_28_11_2023_ABSTRACTVECTOR_H
