//
// Created by jjangga0214 on 18. 6. 1.
//

#pragma once

namespace bts{
    namespace view {
        class pane;
    }
}

class bts::view::pane {
public:
    virtual void draw() const;
};

