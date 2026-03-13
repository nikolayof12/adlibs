#ifndef KEYBOARDS_LIB_H
#define KEYBOARDS_LIB_H

#include <stdint.h>

#include <EncButton.h>

/*
 * Overview
 */

/*
 * Register new 'struct encoder' static variable to encoder control
 *
 * @name - name for new 'struct encoder' obj
 * @left - pin number, where left turn is connected
 * @right - pin number, where right turn is connected
 * @key - pin number, where key (aka button) is connected
 */
#define KEYBOARDS_REGISTER_ENCODER(name, left, right, key)		\
	static EncButton (_enc_ ## name)((left), (right), (key));	\
	static struct encoder (name) = {				\
		.obj = &(_enc_ ## name)					\
	}

struct keyboard_service {
	uint8_t *buttons;
};

#if 0
struct btn {
	uint8_t pin;
	uint8_t state;
};

void keyboard_init(struct keyboard_service *service);

/* return 1 if one of bts clicked, else 0 */
uint8_t keyboards_lib_refresh(struct keyboard_service *service);


#endif
