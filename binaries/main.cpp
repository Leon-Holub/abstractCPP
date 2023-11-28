#include <iostream>

using namespace std;

// abstract vector, umi scitat
// ma x,y
template<class T>
class AbstractVector {
protected:
    float _x, _y;

public:
    T operator+(const T &other) {
        return T(_x + other._x, _y + other._y);
    }

    friend ostream &operator<<(ostream &os, const AbstractVector &other) {
        os << other._x << other._y;
        return os;
    }
};

// EVektor, podedi scitani
class EVector : public AbstractVector<EVector> {
public:
    EVector(float x, float y) {
        _x = x;
        _y = y;
    }
};

class LLVector : public AbstractVector<LLVector> {

};

int main() {

    auto ev = EVector(5, 5) + EVector(1, 1);

    cout << ev << endl;

    return 0;
}