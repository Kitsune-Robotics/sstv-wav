/**
 * @file SSTV.h
 * @author Joe Sedutto (kenwood364@gmail.com)
 * @brief Based on work by Andy Karpov and []
 *
 * @copyright Copyright (c) 2022
 *
 */

// Offical libs
#include <Arduino.h>

// Dependant libs
#include "VS1003.h"

class SSTV
{
private:
    // Objects
    VS1003 player;

    // Pins
    uint8_t ptt_pin;

public:
    /**
     * Constructor,
     *
     * Passes the player to the SSTV object, dosent do anything else.
     */
    SSTV(VS1003 _player, uint8_t _ptt_pin);

    /**
     * Begin
     *
     * Cascades Begin down to the other dependant libs, sets up their pins and others.
     */
    void begin(void);
};
