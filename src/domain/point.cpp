//
// Created by user on 18. 6. 1.
//
#include "domain/point.h"

bool bts::domain::point2d::operator==(bts::domain::point2d &other) {

    return x == other.x && y == other.y;
};

//bts::domain::point2d &operator=(const bts::domain::point2d &other) {
//    x = other.x;
//    y = other.y;
//    return *this;
//}

bool bts::domain::point2d::operator!=(bts::domain::point2d &other) {
    return !((*this) == other);
};