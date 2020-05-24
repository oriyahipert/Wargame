#include "Soldier.hpp"
namespace WarGame{
class FootSoldier: public Soldier{
   public:
   FootSoldier(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}