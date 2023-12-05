//
// Created by leonh on 05.12.2023.
//

#ifndef INC_28_11_2023_POINTADDABLE_H
#define INC_28_11_2023_POINTADDABLE_H
//pointAddable
/*
 *  bod plus vector
 *
 */

template<class T, class U>
class PointAddable {
    virtual T operator+(const U &other) const = 0;
};


#endif //INC_28_11_2023_POINTADDABLE_H
