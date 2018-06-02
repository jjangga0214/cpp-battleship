//
// Created by user on 18. 6. 1.
//

#include "domain/ship.h"
#include <vector>
#include <cmath>
#include <stdexcept>
#include <string>
#include <memory>

namespace bd = bts::domain;

bd::ship::ship(bd::ship::type &kind, bd::point2d start, bd::point2d end) : kind(kind) {
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

bd::ship::cell::cell(const bd::point2d &coordinates) : coordinates(coordinates) {};

bd::ship::type::type(std::string name, char icon, unsigned int size) : name(name), icon(icon), size(size) {};
//bts::domain::ship::cell::cell(int x, int, y) : cell(point2d(x, y)) {};

// enum 처럽 사용하기 위함이다.
const bd::ship::type bd::ship::type::AIRCRAFT_CARRIER("AIRCRAFT_CARRIER", 'A', 5);
const bd::ship::type bd::ship::type::BATTLESHIP("BATTLESHIP", 'B', 4);
const bd::ship::type bd::ship::type::CRUISER("CRUISER", 'C', 3);
const bd::ship::type bd::ship::type::DESTROYER("DESTROYER", 'D', 2);

//const bd::ship::type bd::ship::type::VALUES = std::vector<const bd::ship::type>(0);
//
//const std::vector<std::unique_ptr<const bd::ship::type>> bd::ship::type::VALUES(
//        {std::unique_ptr<const bd::ship::type>(&bd::ship::type::AIRCRAFT_CARRIER),
//         std::unique_ptr<const bd::ship::type>(&bd::ship::type::BATTLESHIP),
//         std::unique_ptr<const bd::ship::type>(&bd::ship::type::CRUISER),
//         std::unique_ptr<const bd::ship::type>(&bd::ship::type::DESTROYER)});

const std::vector<std::shared_ptr<const bd::ship::type>> bd::ship::type::VALUES(
        {std::shared_ptr<const bd::ship::type>(&bd::ship::type::AIRCRAFT_CARRIER),
         std::shared_ptr<const bd::ship::type>(&bd::ship::type::BATTLESHIP),
         std::shared_ptr<const bd::ship::type>(&bd::ship::type::CRUISER),
         std::shared_ptr<const bd::ship::type>(&bd::ship::type::DESTROYER)});
