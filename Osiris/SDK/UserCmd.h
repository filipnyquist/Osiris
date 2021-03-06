#pragma once

#include "Vector.h"

class UserCmd final {
public:
    int pad;
    int     command_number;
    int     tick_count;
    Vector  viewangles;
    Vector  aimdirection;
    float   forwardmove;
    float   sidemove;
    float   upmove;
    int     buttons;
    char    impulse;
    int     weaponselect;
    int     weaponsubtype;
    int     random_seed;
    short   mousedx;
    short   mousedy;
    bool    hasbeenpredicted;
    char    pad_0x4C[0x18];
};
