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
    application();

    virtual ~application();

    static const unsigned int GREEN_BLACK=1;
    static const unsigned int CYAN_BLACK=2;
    static const unsigned int YELLOW_BLACK=3;
    static const unsigned int RED_BLACK=4;

protected:
    virtual void config() const;

    virtual void color(const unsigned int COLOR_CODE) const;

private:
    domain::battleground attacker;//{8,8};
    domain::battleground defender;//{8,8};
};


