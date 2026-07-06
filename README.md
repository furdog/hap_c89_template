# Hardware agnostic project C89 template (hap_c89_template)

This repository represents hardware agnostic project template for C (std=c89).

Designed specifically by furdog and for furdog's hardware agnostic libraries.

This template contains:
- github workflow (actions scripts)
- MISRA checker setup (within makefile)
- Doxygen setup (within makefile)
- Template .h and .test.c files
- Linux Kernel autoformat config
- gcov/lcov detailed coverage report

Github will automatically run tests, checks,
create coverage report and doxygen github pages.

Coverage report is accessible under main doxygen url:
`%https://<your-username>.github.io/<your-repo>/coverage/`

for example: `https://furdog.github.io/hap_c89_template/coverage/`

## TODO
- Fuzzy testing

## Coding guidelines
> Insert this section as a placeholder at the end of README
> This section is a part of https://furdog.github.io/hap_c89_template/

- Linux kernel style, `snake_case`
- Before commit run: `make misra test coverage docs` (or just `make`)
- Follow [The Power of 10: Rules for Developing Safety-Critical Code](https://spinroot.com/gerard/pdf/P10.pdf). Local edit available under [P10.md](./docs/P10.md)
- Doxygen style docs
- Enable github pages (set Actions as source)
	Once enabled, pages will be available under:
	- Doxygen: `%https://<your-username>.github.io/<your-repo>/`
	- Coverage: `%https://<your-username>.github.io/<your-repo>/coverage/`

### Recomended naming
Scientific units with short qualifier prefixes where possible.

Pattern: `[property_description]_[qualifier][scale][unit]_[offset]_[type]`
All sufixes after `property_description` are optional.
```C
timer_r10ms_u8        (Resolution: 10ms/bit, Type: uint8_t)
power_r150w           (Resolution: 150W/bit or 0.15kW/bit)
soc_r0p1pct_u16       (Resolution: 0.1%/bit, Type: uint16_t)
carbon_q5mol_u32      (Quantity:   5mol/unit, Type: uint32_t)
speed_r0p5kmh_offn500 (Resolution: 0.5km/h, Offset: -500)
prescaler_r1div7      (Resolution: 1/7 or 0,142857...)
```
Always document qualifiers.
Provide list of units used, as well as qualifiers or special case notation.

### Placeholders
Source file placeholder example:
````C
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
````

Copyright notice:
```LICENSE
Copyright (c) 2026 furdog <https://github.com/furdog>

SPDX-License-Identifier: 0BSD
```

**Be free, be wise and take care of yourself!
With best wishes and respect, furdog!**
