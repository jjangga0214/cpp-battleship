#include <iostream>
#include <ncurses.h>
#include "Eigen/Dense"
#include "application.h"

int main() {

    std::cout << "Hello World!@!" << std::endl;
    Eigen::Matrix2cd m(2,2);
    m(0,0) = '3';
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;

    bts::application a;

    return 0;
}