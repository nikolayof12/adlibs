#include <stdint.h>

#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#include "lib/temps_lib.h"


/*
 * Setup individual sensor
 *
 * @sensor - ptr to struct temp_sensor, here will be setted values
 * @obj - ptr to DallasTemperature obj, which can control multiple sensors
 * @res - resolution, will set to sensor->resolution
 * @index - index of sensor in 1-Wire
 *
 * return 0 if initialization is successful, else *_lib_ec error code
 */
uint8_t temps_lib_init_sensor(struct temp_sensor *sensor,
			      DallasTemperature *obj,
			      enum accuracy res,
			      uint8_t index)
{
/* TODO: here setup the addresses of every sensor, etc... */

	if (!sensor)
		return struct_not_found_lib_ec;

	if (!obj)
		return dt_obj_not_found_lib_ec;

	if (obj->getDeviceCount() != 1)
		return device_not_found_lib_ec;


	obj->getAddress(sensor->address, index);
	sensor->obj = obj;
	sensor->resolution = res;

	return 0;
}


uint8_t temps_lib_refresh(struct temps_service *service)
{
/* TODO: here read the temps, update the timers, etc... */
}
