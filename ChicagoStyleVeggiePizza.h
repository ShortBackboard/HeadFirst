#ifndef CHICAGOSTYLEVEGGIEPIZZA_H
#define CHICAGOSTYLEVEGGIEPIZZA_H
#include "pizza.h"

class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza();
};

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
    m_type = "芝加哥蔬菜披萨";
}

#endif // CHICAGOSTYLEVEGGIEPIZZA_H
