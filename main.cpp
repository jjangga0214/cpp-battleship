#include <iostream>
#include <ncurses.h>
#include "Eigen/Dense"
#include "application.h"
#include <vector>
#include <bits/unique_ptr.h>
#include "domain/point.h"

int main() {

    std::cout << "Hello World!@!" << std::endl;
//    Eigen::Matrix2cd m(2, 2);
//    m(0, 0) = '3';
//    m(1, 0) = 2.5;
//    m(0, 1) = -1;
//    m(1, 1) = m(1, 0) + m(0, 1);
//    std::cout << m << std::endl;
//
//    Eigen::Matrix<bool,2,2> m2;
//    m2(0, 0) = true;
//    m2(1, 0) = false;
//    m2(0, 1) = -1;
//    m2(1, 1) = m2(1, 0) + m2(0, 1);
//    std::cout << m2 << std::endl;

    //bts::application a;
//    std::unique_ptr<bts::domain::point2d> p = std::make_unique<bts::domain::point2d>(1, 2);
//    std::vector<bts::domain::point2d> v;
//    v.push_back(*p);
//    p = std::make_unique<bts::domain::point2d>(p->x + 1, 2);
//    v.push_back(*p);
//    for (auto &i: v) {
//        std::cout << i.x;
//    }

    return 0;
}