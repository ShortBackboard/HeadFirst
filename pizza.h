#ifndef PIZZA_H
#define PIZZA_H
#include "halfSugar.h"
#include "thickCrust.h"

class Pizza {
public:
    void prepareSugar(string type);
    void prepareCrust(string type);
    void display();

private:
    Sugar* m_sugar;
    Crust* m_crust;
};

void Pizza::prepareCrust(string type)
{
    if(type == "thickCrust")
    {
        m_crust = new ThickCrust();

        m_crust->display();
    }
}

void Pizza::prepareSugar(string type)
{
    if(type == "halfSugar")
    {
        m_sugar = new HalfSugar();

        m_sugar->display();
    }

}

void Pizza::display()
{
    cout << " 披萨制作好了！\n";
}

#endif // PIZZA_H
