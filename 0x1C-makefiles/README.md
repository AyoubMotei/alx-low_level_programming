# Makefile Examples

This repository contains a collection of Makefile examples for various tasks. Each Makefile demonstrates different concepts and functionalities related to building and managing software projects using Make.

## Contents

1. [0-Makefile](./0x1C-makefiles/0-Makefile): Basic Makefile to build an executable named `school` from source files `main.c` and `school.c`.

2. [1-Makefile](./0x1C-makefiles/1-Makefile): Improved Makefile using variables `CC` and `SRC` to build the `school` executable.

3. [2-Makefile](./0x1C-makefiles/2-Makefile): Enhanced Makefile with additional variables `OBJ` and `NAME`, demonstrating more advanced compilation and linking.

4. [3-Makefile](./0x1C-makefiles/3-Makefile): Makefile with rules for building, cleaning, and managing object files and the final executable.

5. [4-Makefile](./0x1C-makefiles/4-Makefile): Comprehensive Makefile with additional compiler flags and improved structure.

6. [5-island_perimeter.py](./0x1C-makefiles/5-island_perimeter.py): Python function for calculating the perimeter of an island described in a grid.

7. [100-Makefile](./0x1C-makefiles/100-Makefile): Advanced Makefile with more complex rules and optimizations.

## Usage

Each Makefile comes with a set of instructions on how to use it. Simply navigate to the appropriate directory and execute the `make` command followed by the desired target rule. For example:

```bash
make -f 0-Makefile  # Build the executable using 0-Makefile
make -f 3-Makefile clean  # Clean up temporary files using 3-Makefile

