#include "Soldier.hpp"
namespace WarGame{
class SniperCommander: public Soldier{
   public:
   SniperCommander(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}