#ifndef CPPTRADEGAME_PORTGOODS_HPP
#define CPPTRADEGAME_PORTGOODS_HPP

#include "Port.hpp"
#include "Goods.hpp"

namespace model {


    class PortGoods {
    private:
        model::Port port;
        model::Goods good;
        unsigned int minGoods;
        unsigned int maxGoods;
        double minPrice;
        double maxPrice;
    };

}

#endif //CPPTRADEGAME_PORTGOODS_HPP
