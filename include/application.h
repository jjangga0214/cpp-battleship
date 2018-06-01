//
// Created by jjangga0214 on 18. 5. 31.
//
#pragma once

#include <ncurses.h>
#include "domain/battleground.h"

namespace bts {
    class application;
}

class bts::application {

public:
    application(unsigned int GREEN_BLACK = 1, unsigned int CYAN_BLACK = 2, unsigned int YELLOW_BLACK = 3,
                unsigned int RED_BLACK = 4);

    virtual ~application();

    const unsigned int GREEN_BLACK;
    const unsigned int CYAN_BLACK;
    const unsigned int YELLOW_BLACK;
    const unsigned int RED_BLACK;

protected:
    virtual void config() const;

    virtual void color(const unsigned int COLOR_CODE) const;

private:
    domain::battleground attacker{8,8};
    domain::battleground defender{8,8};
};



