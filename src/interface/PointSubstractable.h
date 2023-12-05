//
// Created by leonh on 05.12.2023.
//

#ifndef INC_28_11_2023_POINTSUBSTRACTABLE_H
#define INC_28_11_2023_POINTSUBSTRACTABLE_H

template<class T, class U>
class PointSubstractable {
    virtual U operator-(const T &other) const = 0;
};

#endif //INC_28_11_2023_POINTSUBSTRACTABLE_H
