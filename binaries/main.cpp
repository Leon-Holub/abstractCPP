#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class Addable {
    virtual T operator+(const T &other) const = 0;
};

template<class T>
class Scalarable {
    virtual float scalar(const T &other) const = 0;
};

// abstract vector, umi scitat
// ma x,y
template<class T>
class AbstractVector : public Addable<T>, Scalarable<T> {
public:
    static float norm(const T &other) {
        sqrt(other.scalar());
    }
};

// EVektor, podedi scitani
class EVector : public AbstractVector<EVector> {
    float _x, _y;

public:
    EVector(float x, float y) {
        _x = x;
        _y = y;
    }

    EVector operator+(const EVector &other) const override {
        return {_x + other._x, _y + other._y};
    }

    float scalar(const EVector &other) const override {
        return _x * other._x + _y * other._y;
    }


    friend ostream &operator<<(ostream &os, const EVector &other) {
        os << other._x << other._y;
        return os;
    }
};

class LLVector : public AbstractVector<LLVector> {
};


int main() {
    auto ev = EVector(1, 1) + EVector(2, 2);

    cout << ev << endl;

    return 0;
}