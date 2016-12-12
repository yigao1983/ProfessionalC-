#ifndef GAMEGRID_HPP
#define GAMEGRID_HPP

#include "Grid.hpp"

template <typename T>
class GameGrid : public Grid<T>
{
public:
  GameGrid(int inWidth = Grid<T>::kDefaultWidth,
	   int inHeight = Grid<T>::kDefaultHeight);
  void move(int xSrc, int ySrc, int xDest, int yDest);
};

template <typename T>
GameGrid<T>::GameGrid(int inWidth, int inHeight) : 
  GridT<T>(inWidth, inHeight)
{}

template <typename T>
void GameGrid<T>::move(int xSrc, int ySrc, int xDest, int yDest)
{
  this->mCells[xDest][yDest] = this->mCells[xSrc][ySrc];
  this->mCells[xSrc][ySrc] = T();
}

#endif
