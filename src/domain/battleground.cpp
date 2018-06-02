//
// Created by jjangga0214 on 18. 6. 1.
//

#include "domain/battleground.h"
#include "domain/ship.h"
#include "Eigen/Dense"
#include <algorithm>
#include <vector>
#include <memory>

namespace bd = bts::domain;

bd::battleground::battleground(std::vector<std::shared_ptr<const bd::ship::type>> types, unsigned int width, unsigned int height, int default_hit) : hitmap(width, height) {
//    std::vector<const bd::ship::type *> types(
//            {&bd::ship::type::AIRCRAFT_CARRIER, &bd::ship::type::BATTLESHIP, &bd::ship::type::CRUISER,
//             &bd::ship::type::DESTROYER});

//    std::vector<std::shared_ptr<const bd::ship::type>> types(
//            {std::shared_ptr<const bd::ship::type>(&bd::ship::type::AIRCRAFT_CARRIER),
//             std::shared_ptr<const bd::ship::type>(&bd::ship::type::BATTLESHIP),
//             std::shared_ptr<const bd::ship::type>(&bd::ship::type::CRUISER),
//             std::shared_ptr<const bd::ship::type>(&bd::ship::type::DESTROYER)});

    //ships = std::vector<bd::ship>();
//    auto to_ship = [](bd::ship::type &t) -> bd::ship { return bd::ship(t); };
//    std::transform(std::begin(types), std::end(types), std::begin(ships), to_ship);
    random_deploy(default_hit);
}

void bd::battleground::random_deploy(int default_hit) {
    clear_hitmap(default_hit);
}

void bd::battleground::clear_hitmap(int default_hit) {
    for (int row = 0; row < hitmap.rows(); ++row) {
        for (int col = 0; col < hitmap.cols(); ++col) {
            hitmap(row, col) = default_hit;
        }
    }
}