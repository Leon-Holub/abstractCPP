//
// Created by leonh on 05.12.2023.
//

#ifndef INC_28_11_2023_ABSTRACTEUCLIDEANPOINT_H
#define INC_28_11_2023_ABSTRACTEUCLIDEANPOINT_H

#include "../interface/PointAddable.h"
#include "../interface/PointSubstractable.h"
#include "AbstractEuclidVector.h"

template<class T, class U>
class AbstractEuclideanPoint : public PointAddable<T, U>, PointSubstractable<T, U> {
public:
    static float distance(const T &first, const T &second) {
        auto v = first - second;
        return v.norm(v);
    }
};

#endif //INC_28_11_2023_ABSTRACTEUCLIDEANPOINT_H
