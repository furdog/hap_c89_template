#include <stdio.h>

#include "template.h"

int main()
{
	struct template_instance tpl;

	template_instance_init(&tpl);

	assert(template_instance_update(&tpl) == 0u);

	template_instance_set_test(&tpl, 5u);

	assert(template_instance_update(&tpl) == 5u);

	return 0;
}
