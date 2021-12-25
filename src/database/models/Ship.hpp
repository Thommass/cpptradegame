#ifndef CPPTRADEGAME_SHIP_HPP
#define CPPTRADEGAME_SHIP_HPP

#include "ShipType.hpp"
#include "vector"
#include "Special.hpp"

namespace model {


    class Ship {
    private:
        unsigned int id;
        model::ShipType type;
        unsigned int price;
        unsigned int cargo;
        unsigned int cannons;
        unsigned int health;
        vector<model::Special> specials;
    };
}


#endif //CPPTRADEGAME_SHIP_HPP
