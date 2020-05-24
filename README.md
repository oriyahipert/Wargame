## namespace Wargame:

board:
A board representing a board game with soldiers.

soldier:

* FootSoldier - legs - can go one slot in any direction. Shoots at the enemy soldier closest to him (if there are any - he shoots one of them arbitrarily).

* FootCommander - Like my feet, but when he moves, not only does he shoot but all the foot soldiers of that player shoot.

* Sniper - sniper - can go one slot in any direction. Shoots at the enemy’s strongest soldier - the one who has the most health points (if there are a few - he chooses one of them arbitrarily).

* SniperCommander - Like a sniper, but when he moves, not only does he shoot but all of the same sniper's shoot.

* Paramedic - a medic - can go one slot in any direction. Does not fire at all, but only heals all the soldiers of the same player who are in the slot next to him (returns their number of health points to the starting number).

* ParamedicCommander - Like a medic, but when he moves, all the player's medics heal the soldiers who are near them.

Rules of the Game-
Each player has several different types of soldiers, each type of soldier has different abilities.
Each player in turn can move one player to one place of their choice, depending on the soldier's movement abilities.
The same soldier who moves, also shoots or acts in the same turn depending on his ability to act.
Each soldier starts with a number of health points.
Each shot lowers a number of hit points.
A soldier whose number of health points reaches zero - gets off the board.
A player whose soldiers are off the board - loser.
