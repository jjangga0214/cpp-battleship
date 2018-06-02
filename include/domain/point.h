//
// Created by user on 18. 6. 1.
//

#pragma once

namespace bts {
    namespace domain {
        class point2d;
    }
}

class bts::domain::point2d {
public:
    point2d(int x = 0, int y = 0) : x(x), y(y) {}

    bool operator==(point2d &other);

    bool operator!=(point2d &other);

    point2d &operator=(const point2d &other)= delete;

    const int x;
    const int y;

};
