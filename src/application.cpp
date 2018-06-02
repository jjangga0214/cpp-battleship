//
// Created by jjangga0214 on 18. 6. 1.
//

#include "application.h"
#include <vector>
#include "domain/ship.h"

bts::application::application(){

    initscr(); // Curses 모드 시작
    start_color(); // Color 사용 선언
    config();
    color(bts::application::RED_BLACK);
    printw("Hello world"); // Hello world 출력

    refresh(); // 실제 스크린에 출력
    getch(); // 사용자 입력 대기
    endwin(); // Curses 모드 종료
}

void bts::application::config() const {
    // color configuraion
    start_color(); // Color 사용 선언
    init_pair(bts::application::GREEN_BLACK, COLOR_GREEN, COLOR_BLACK);
    init_pair(bts::application::CYAN_BLACK, COLOR_CYAN, COLOR_BLACK);
    init_pair(bts::application::YELLOW_BLACK, COLOR_YELLOW, COLOR_BLACK);
    init_pair(bts::application::RED_BLACK, COLOR_RED, COLOR_BLACK);
}


void bts::application::color(const unsigned int COLOR_CODE) const {
    attron(COLOR_PAIR(COLOR_CODE));
}

bts::application::~application() {
    const std::vector<unsigned int> x = {this->GREEN_BLACK, this->CYAN_BLACK, this->YELLOW_BLACK, this->RED_BLACK};
    for (auto &colorCode : x) {
        attroff(COLOR_PAIR(colorCode)); // Color Attribute 해제
    }
    endwin(); // Curses 모드 종료
}