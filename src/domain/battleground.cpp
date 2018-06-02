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

bd::battleground::battleground(std::vector<std::shared_ptr<const bd::ship::type>> types, unsigned int width, unsigned int height, int default_hit) : hitmap(width, height), default_hit(default_hit) {

    random_deploy();
}

void bd::battleground::random_deploy() {
    clear_hitmap();
}

void bd::battleground::clear_hitmap() {
    for (int row = 0; row < hitmap.rows(); ++row) {
        for (int col = 0; col < hitmap.cols(); ++col) {
            hitmap(row, col) = default_hit;
        }
    }
}