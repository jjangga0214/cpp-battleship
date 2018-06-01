//
// Created by jjangga0214 on 18. 6. 1.
//

#include "domain/battleground.h"
#include "domain/ship.h"

bts::domain::battleground::battleground(std::vector<ship> ships, unsigned int width, unsigned int height)
        : ships(ships), hitmap(width, height) {

}