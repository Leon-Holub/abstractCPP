//
// Created by leonh on 28.11.2023.
//

#ifndef INC_28_11_2023_SCALARABLE_H
#define INC_28_11_2023_SCALARABLE_H

template<class T>
class Scalarable {
    virtual float scalar(const T &other) const = 0;
};
#endif //INC_28_11_2023_SCALARABLE_H
