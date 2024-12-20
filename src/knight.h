#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "piece.h"
#include "board.h"


namespace chess {

class Knight : public Piece
{
public:
    Knight(Colour inputColour, const Position& startPosition) : Piece(inputColour, startPosition) {}
    ~Knight() = default;

    std::vector<Position> getValidMoves(const Board& board) const override;
    PieceType type() const override { return chess::PieceType::Knight; };
    std::string typeAsString() const override { return "Knight"; }
};

}