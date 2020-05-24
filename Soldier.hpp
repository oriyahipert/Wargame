#pragma once
namespace WarGame {
class Soldier {
  private:
  int healthPoints;
  int damage;
  int player;
public:
  Soldier(): healthPoints(0), damage(0), player(0){} 
  Soldier(int p): player(p), damage(0), healthPoints(0){}
  void shoot(Soldier s);
  void act(Soldier s);
};
}