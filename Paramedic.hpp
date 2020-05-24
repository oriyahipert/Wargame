#include "Soldier.hpp"
namespace WarGame{
class Paramedic: public Soldier{
   public:
   Paramedic(int p);
    void shoot(Soldier s);
  void act(Soldier s);
};
}