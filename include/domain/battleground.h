//
// Created by jjangga0214 on 18. 6. 1.
//

#pragma once

#include "Eigen/Dense"
#include <vector>
#include "domain/ship.h"

namespace bts {
    namespace domain {
        class battleground;
    }
}


class bts::domain::battleground {
public:
    battleground(std::vector<ship> ships={}, unsigned int width = 8, unsigned int height = 8);

private:
    Eigen::MatrixXd hitmap; // cell 에 hit 여부를 기록한다.
    std::vector<ship> ships;
};