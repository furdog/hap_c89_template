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
`https://<your-username>.github.io/<your-repo>/coverage/`
for example: https://furdog.github.io/hap_c89_template/coverage/

```
Copyright (c) 2026 furdog <https://github.com/furdog>

SPDX-License-Identifier: 0BSD
```
