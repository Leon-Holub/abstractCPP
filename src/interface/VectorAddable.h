//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_VECTORADDABLE_H
#define INC_28_11_2023_VECTORADDABLE_H

template<class T>
class VectorAddable {
    virtual T operator+(const T &other) const = 0;
};

#endif //INC_28_11_2023_VECTORADDABLE_H
