#include "Soldier.hpp"
namespace WarGame{
class FootCommander: public Soldier{
   public:
   FootCommander(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}