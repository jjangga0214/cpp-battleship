//
// Created by user on 18. 6. 1.
//

#pragma once

#include "point.h"
#include <vector>
#include <string>

namespace bts {
    namespace domain {
        class ship;
    }
}

class bts::domain::ship {
public:

    /**
     * @params point2d start, point2d end
     * cell 의 구간은 [start, end) 이다. 즉, start 부터 end 이전까지 포함한다.
     * 이 둘의 대소 관계는 상관없이 수평 또는 수직, 또는 대각선 중 하나의 직선 위에 있으면 된다.
     */

    class cell {
    public:
        cell(const point2d &coordinates);
        //cell(int x, int, y); 자동으로 변환될 것이다.
    private:
        const point2d coordinates;
        bool hit = false;
    };

    class type {
        /*
         * 복수의 data field 를 가진 enum 과 같은 역할이다.
         * private constructor 를 사용하는 이유도 compile time 에 몇개의 고정된 인스턴스만 제공하려는 의도이다.
         */
    private:
        type(std::string name, char icon, unsigned int size);
    public:
        static const type A;
        static const type C;
        static const type D;

        const std::string name;
        const char icon;
        const unsigned int size;

    };
    const type kind;
    ship(type kind, point2d start, point2d end);

private:
    std::vector<cell> cells{};
};

