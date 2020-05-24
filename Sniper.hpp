#include "Soldier.hpp"
namespace WarGame{
class Sniper: public Soldier{
   public:
  Sniper(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}