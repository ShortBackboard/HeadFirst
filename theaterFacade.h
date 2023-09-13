#ifndef THEATERFACADE_H
#define THEATERFACADE_H
#include "light.h"
#include "screen.h"
#include "projector.h"
#include "player.h"

class TheaterFacade {
public:
    void watchDvd()
    {
        m_light->down();
        m_screen->open();
        m_projector->on();
        m_projector->toDVD();
        m_player->on();
    }

    void closeDvd()
    {
        m_player->off();
        m_projector->off();
        m_screen->close();
        m_light->up();
    }
private:
    Light* m_light = new Light();
    Screen* m_screen = new Screen;
    Projector* m_projector = new Projector();
    Player* m_player = new Player();
};

#endif // THEATERFACADE_H
