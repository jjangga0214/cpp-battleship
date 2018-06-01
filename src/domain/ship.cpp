//
// Created by user on 18. 6. 1.
//

#include "domain/ship.h"
#include <vector>
#include <cmath>
#include <stdexcept>
#include <string>
#include <memory>

bts::domain::ship::ship(type kind, point2d start, point2d end) : kind(kind) {
    int xGap = end.x - start.x;
    int yGap = end.y - start.y;
    if ((xGap != 0 && std::abs(xGap) != kind.size)
        || (yGap != 0 && std::abs(yGap) != kind.size)) {
        throw std::invalid_argument(
                "'point2d start' and 'point2d end' have to be on horizontal or vertical, or diagonal line.");
    }
    int xPadding = xGap ? xGap / xGap : 0;
    int yPadding = yGap ? yGap / yGap : 0;
    std::unique_ptr<point2d> p = std::make_unique<point2d>(start.x, start.y);
    for (; *p != end; p = std::make_unique<point2d>(p->x + xPadding, p->y + yPadding)) {
        cells.push_back(*p); // *p 는 bts::domain::ship::cell(*p) 로 변환되어 인자로 들어갈 것이다.
    }
};

bts::domain::ship::cell::cell(const point2d &coordinates) : coordinates(coordinates) {};


bts::domain::ship::type::type(std::string name, char icon, unsigned int size) : name(name), icon(icon), size(size) {};
//bts::domain::ship::cell::cell(int x, int, y) : cell(point2d(x, y)) {};

// enum 처럽 사용하기 위함이다.
const bts::domain::ship::type bts::domain::ship::type::A = bts::domain::ship::type("ALPHA", 'A', 5);
const bts::domain::ship::type bts::domain::ship::type::C = bts::domain::ship::type("BETA", 'B', 4);
const bts::domain::ship::type bts::domain::ship::type::D = bts::domain::ship::type("GAMMER", 'C', 5);