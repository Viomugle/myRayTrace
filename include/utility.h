#ifndef _UTILITY_H
#define _UTILITY_H
#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>
#include <chrono>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;
using namespace std::chrono;

const double inf=std::numeric_limits<double>::infinity();
const double pi=3.1415926535897932385;

inline double degrees_to_radians(double degrees){
    return degrees*pi/180.0;
}

inline double random_double()
{
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max)
{
    return min + (max - min) * random_double();
}

inline int random_int(int min, int max)
{
    return static_cast<int>(random_double(min, max + 1));
}

inline double clamp(double x, double min, double max)
{
    if (x < min)
        return min;
    if (x > max)
        return max;
    return x;
}

#include "ray.h"
#include "vec3.h"

#endif  