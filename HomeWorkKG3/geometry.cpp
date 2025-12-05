#include <vector>
#include <cassert>
#include <cmath>
#include <iostream>
#include "geometry.h"

template<>
template<>
Vec3<int>::Vec3(const Vec3<float>& v)
    : x{ static_cast<int>(std::round(v.x)) } 
    , y{ static_cast<int>(std::round(v.y)) }
    , z{ static_cast<int>(std::round(v.z)) }
{
}

template<>
template<>
Vec3<float>::Vec3(const Vec3<int>& v)
    : x{ static_cast<float>(v.x) }
    , y{ static_cast<float>(v.y) }
    , z{ static_cast<float>(v.z) }
{
}