#include <Arduino.h>

#include "SSTV.h"

VS1003 my_player(9, 6, 7, 8);
SSTV my_sstv(my_player, 10);

void setup()
{
    my_sstv.begin();
}

void loop()
{
    delay(200);
}
