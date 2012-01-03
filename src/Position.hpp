#ifndef POSITION_HPP
#define POSITION_HPP
enum class AbsoluteDirection
{
  North, South, West, East
};

class Position
{
public:
  static const int SEGMENTS_BY_UNIT=1<<16;
  Position();
  Position(int x, int y);
  Position(const Position &);
  bool isEven () const;
  int x () const;
  int y () const;
  void setX (int x);
  void setY (int y);
  void moveX(int segments);
  void moveY(int segments);
};


#endif
