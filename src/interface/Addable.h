//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_ADDABLE_H
#define INC_28_11_2023_ADDABLE_H

template<class T>
class Addable {
    virtual T operator+(const T &other) const = 0;
};

#endif //INC_28_11_2023_ADDABLE_H
