# ft_printf

The **ft_printf** project is a custom implementation of the `printf()` function from the C standard library, recreated to mimic its behavior for formatted output.

## Function Overview

- **Function Name**: `ft_printf`
- **Prototype**: `int ft_printf(const char *, ...);`
- **Parameters**: 
  - A format string and a variable number of arguments.

## Key Features

- **Conversions Supported**: The function supports the following format specifiers:
  - `%c`: Prints a single character.
  - `%s`: Prints a string.
  - `%p`: Prints a pointer in hexadecimal format.
  - `%d`, `%i`: Prints a decimal (base 10) integer.
  - `%u`: Prints an unsigned decimal number.
  - `%x`: Prints a hexadecimal number (lowercase).
  - `%X`: Prints a hexadecimal number (uppercase).
  - `%%`: Prints a percent sign.

- **Bonus Features**: The project also includes support for the following flags, just like the original `printf`:
  - `#`: Adds a prefix for `x`, `X`, and `p` conversions (e.g., `0x` for lowercase hexadecimal).
  - `+`: Forces a sign (+ or -) in front of signed numbers.
  - ` ` (space): Adds a space before positive numbers if no sign is displayed.

## Library Details

- **Library Name**: `libftprintf.a`
- **Makefile Targets**: 
  - `all`, `clean`, `fclean`, `re`
- **External Functions**: Uses `malloc`, `free`, `write`, and variadic function macros (`va_start`, `va_arg`, `va_copy`, `va_end`).
- **Libft Allowed**: You are allowed to use your **libft** library in this project.

## Compilation and Usage

The project is compiled into a static library using the `ar` command. After compilation, the `ft_printf` function can be used similarly to `printf()` to handle formatted output in C programs.

This project emphasizes mastery of variadic functions and formatted output in C, along with memory management and function optimization.
