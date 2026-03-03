/**
 * @file template.h
 * @brief Template (Hardware-Agnostic)
 *
 * This file contains the software implementation of the #TEMPLATE logic.
 * The design is hardware-agnostic, requiring an external adaptation layer
 * for hardware interaction.
 *
 * **Conventions:**
 * C89, Linux kernel style, MISRA, rule of 10, No hardware specific code,
 * only generic C and some binding layer. Be extra specific about types.
 *
 * Scientific units where posible at end of the names, for example:
 * - timer_10s (timer_10s has a resolution of 10s per bit)
 * - power_150w (power 150W per bit or 0.15kw per bit)
 *
 * Keep variables without units if they're unknown or not specified or hard
 * to define with short notation.
 *
 * ```LICENSE
 * Copyright (c) 2025 furdog <https://github.com/furdog>
 *
 * SPDX-License-Identifier: 0BSD
 * ```
 *
 * Be free, be wise and take care of yourself!
 * With best wishes and respect, furdog
 */

#ifndef TEMPLATE_HEADER_GUARD
#define TEMPLATE_HEADER_GUARD

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

/** Template main instance */
struct template_instance {
	uint8_t test; /**< Test purposes */
};

/** Template init function */
static void template_instance_init(struct template_instance *self)
{
	assert(self);

	self->test = 0u;
}

/** Template 'test' setter */
static void template_instance_set_test(struct template_instance *self,
				       uint8_t			 val)
{
	assert(self);

	self->test = val;
}

/** Template Main Loop */
static uint8_t template_instance_update(struct template_instance *self
					/*uint32_t delta_time_ms*/)
{
	assert(self);

	return self->test;
}

#endif /* TEMPLATE_HEADER_GUARD */
