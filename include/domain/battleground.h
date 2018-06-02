//
// Created by jjangga0214 on 18. 6. 1.
//

#pragma once

#include "Eigen/Dense"
#include <vector>
#include "domain/ship.h"
#include <memory>

namespace bts {
    namespace domain {
        class battleground;
    }
}

namespace bd = bts::domain;

class bts::domain::battleground {
public:
    battleground(std::vector<std::shared_ptr<const bd::ship::type>> types = bd::ship::type::VALUES,
                 unsigned int width = 8, unsigned int height = 8, int default_hit = 0);

protected:
    void random_deploy(int default_hit = 0);

    void clear_hitmap(int default_hit = 0);

private:
    bool reflected = false;
    Eigen::MatrixXd hitmap; // coordinate 에 hit 여부를 기록한다.
    std::vector<bts::domain::ship> ships;
};