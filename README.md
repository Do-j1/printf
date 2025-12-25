*This activity has been created as part of the 42 curriculum by dal-ali.*

# ft_printf

## Description
This project is a reimplementation of the C library function `printf()`.
The goal is to build a static library `libftprintf.a` containing `ft_printf()` that mimics the original `printf()` behavior for a limited set of conversions.

Prototype:
`int ft_printf(const char *format, ...);`

## Supported conversions

    `%c` prints a single character
    `%s` prints a string
    `%p` prints a pointer address in hexadecimal
    `%d` prints a decimal (base 10) number
    `%i` prints an integer in base 10
    `%u` prints an unsigned decimal (base 10) number
    `%x` prints a number in hexadecimal (lowercase)
    `%X` prints a number in hexadecimal (uppercase)
    `%%` prints a percent sign

## Instructions

### Build
```bash
make
```

### Clean
```bash
make clean
```

### Full Clean
```bash
make fclean
```

### Rebuild
```bash
make re
```

### Usage
Include the header file in your source code:

```c
#include "ft_printf.h"
```
Compile your program and link it with the library:
```bash
cc main.c libftprintf.a
```


## Implementation details (Algorithm & Data Structure)

### General approach

The ft_printf function iterates through the format string character by character.
Regular characters are printed directly using ft_putchar, and the total number of printed
characters is tracked and returned.

When a % character is encountered, the following character is interpreted as a conversion
specifier and is handled by a dedicated function.

### Dispatch structure

A helper function (putarg) is used as a dispatcher.
It receives the conversion specifier and the variadic arguments list, then calls the appropriate
printing function depending on the specifier type.

Each conversion is handled by a separate function, which ensures a modular and readable design.

### Variadic arguments handling

Since ft_printf accepts a variable number of arguments, the implementation uses the
stdarg.h macros: va_list, va_start, va_arg, and va_end to retrieve each argument
according to its corresponding conversion specifier.

### Number and pointer handling
	•	Signed and unsigned integers are printed using recursive functions that handle digit-by-digit
output and special cases such as negative values.
	•	Hexadecimal conversions (%x and %X) use base-16 recursive conversion.
	•	Pointer values (%p) are printed in hexadecimal format with the 0x prefix, and (nil) is
displayed when the pointer is NULL

## Resources
- Linux manual pages (`man`) for C standard library functions
- 42 subject documentation


### Use of AI

AI was used only to assist with explanations and documentation.

All functions are implemented according to the 42 coding norm and are designed to be reusable,
modular, and memory-safe.
