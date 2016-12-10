// GameBoard.cpp
#include "GameBoard.hpp"

GameBoard::GameBoard(int inWidth, int inHeight) :
  mWidth(inWidth), mHeight(inHeight)
{
  mCells = new GamePiece *[mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new GamePiece[mHeight];
  }
}

GameBoard::GameBoard(const GameBoard &src)
{
  copyFrom(src);
}

GameBoard::~GameBoard()
{
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    delete[] mCells[i];
  }
  
  delete[] mCells;
}

void GameBoard::copyFrom(const GameBoard &src)
{
  int i, j;
  mWidth = src.mWidth;
  mHeight = src.mHeight;
  
  mCells = new GamePiece *[mWidth];
  for (i = 0; i < mWidth; i++) {
    mCells[i] = new GamePiece[mHeight];
  }
  for (i = 0; i < mWidth; i++) {
    for (j = 0; j < mHeight; j++) {
      mCells[i][j] = src.mCells[i][j];
    }
  }
}

GameBoard &GameBoard::operator=(const GameBoard &rhs)
{
  // Check for self-assignment
  if (this == &rhs) {
    return *this;
  }
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    delete[] mCells[i];
  }
  delete[] mCells;
  
  // Copy the new memory
  copyFrom(rhs);
  
  return *this;
}

void GameBoard::setPieceAt(int x, int y, const GamePiece &inElem)
{
  mCells[x][y] = inElem;
}

GamePiece &GameBoard::getPieceAt(int x, int y)
{
  return mCells[x][y];
}

const GamePiece &GameBoard::getPieceAt(int x, int y) const
{
  return mCells[x][y];
}
