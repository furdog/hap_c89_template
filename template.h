/**
 * @file template.h
 * @brief Template (Hardware-Agnostic)
 *
 * This file contains the software implementation of the #TEMPLATE logic.
 * The design is hardware-agnostic, requiring an external adaptation layer
 * for hardware interaction.
 *
 * ```LICENSE
 * Copyright (c) 2026 furdog <https://github.com/furdog>
 *
 * SPDX-License-Identifier: 0BSD
 * ```
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
