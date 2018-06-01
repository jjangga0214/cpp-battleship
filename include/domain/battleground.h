//
// Created by jjangga0214 on 18. 6. 1.
//

#pragma once

#include "Eigen/Dense"

namespace bts {
    namespace domain {
        class battleground;
    }
}


class bts::domain::battleground {
public:
    battleground(unsigned int width = 8, unsigned int height = 8);

private:
    Eigen::Matrix2cd map;
};