#include <iostream>
#include <cmath>
#include <Vector.h>

using namespace std;

// abstract vector, umi scitat
// ma x,y

// EVektor, podedi scitani

int main()
{
    EVector(5, 5);
    auto ev = EVector(5, 5) + EVector(1, 1);

    cout << ev << endl;

    return 0;
}