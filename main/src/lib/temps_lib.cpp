#include <stdint.h>

#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#include "lib/temps_lib.h"


void temps_init(struct temps_service *service)
{
/* TODO: here setup the addresses of every sensor, etc... */
}


void temps_refresh(struct temps_service *service)
{
/* TODO: here read the temps, update the timers, etc... */
}
