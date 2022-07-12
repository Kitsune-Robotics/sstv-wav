/**
 * @file SSTV.cpp
 * @author Joe Sedutto (kenwood364@gmail.com)
 * @brief Based on work by Andy Karpov and []
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "SSTV.h"

SSTV::SSTV(VS1003 _player, uint8_t _ptt_pin) : player(_player), ptt_pin(_ptt_pin) {}

void SSTV::begin(void)
{
    // Cascade begin player
    player.begin();
}