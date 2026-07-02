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
 * Naming Convention Standard:
 * Use scientific units with short qualifier prefixes where possible:
 * Pattern: [property_description]_[qualifier][scale][unit]_[offset]_[type]
 * Examples:
 * - timer_r10ms_u8        (Resolution: 10ms/bit, Type: uint8_t)
 * - power_r150w           (Resolution: 150W/bit or 0.15kwt/bit)
 * - soc_r0p1pct_u16       (Resolution: 0.1%/bit, Type: uint16_t)
 * - carbon_q5mol_u32      (Quantity:   5mol/unit, Type: uint32_t)
 * - speed_r0p5kmh_offn500 (Resolution: 0.5km/h, Offset: -500)
 * - prescaler_r1div7      (Resolution: 1/7 or 0,142857...)
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
