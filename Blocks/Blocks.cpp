#include "../Position/Position.hpp"
#include "Block.hpp"

class LBlock : public Block {
public:
    LBlock() {
        ID = 1;
        cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};

        FallBlock(0, 7);
    }
};