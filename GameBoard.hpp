// GameBoard.hpp

#ifndef GAMEBOARD
#define GAMEBOARD

#include "GamePiece.hpp"

class GameBoard
{
public:
  // The general-purpose GameBoard allows the user to specify its dimensions
  GameBoard(int inWidth = kDefaultWidth, int inHeight = kDefaultHeight);
  GameBoard(const GameBoard &src); // Copy constructor
  ~GameBoard();
  GameBoard &operator=(const GameBoard &src); // Assignment operator
  
  void setPieceAt(int x, int y, const GamePiece &inPiece);
  GamePiece &getPieceAt(int x, int y);
  const GamePiece &getPieceAt(int x, int y) const;
  
  int getHeight() const { return mHeight; }
  int getWidth() const { return mWidth; }
  
  static const int kDefaultWidth = 10;
  static const int kDefaultHeight = 10;
  
protected:
  void copyFrom(const GameBoard &src);
  // Objects dynamically allocate space from the game pieces
  GamePiece **mCells;
  int mWidth, mHeight;
};

#endif
