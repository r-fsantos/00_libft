<h1 align="center">
	42 | libft
</h1>

<p align="center">
	<b><i>"Your very first own library."</i></b><br>
	This repo contains all code developed throughout the libft project. It is also a living project, regularly updated with new functions.
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-about">Grade</a>
	<span> · </span>
	<a href="#-index">Content</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">How to use</a>
	<span> · </span>
	<a href="#-testing">Tests (TODO)</a>
	<span> · </span>
	<a href="#-testing">License</a>
</h3>

---

## About
C programming can be very tedious when one doesn’t have access to those highly useful standard functions. It is a very interesting project, allows one to re-write those functions, understand them, and learn to use them. It will very helpful throughout the Human Coder | Software Engineering program.

Most of the code writen in this project mimic libc's canonical functions. To know more on each one of them, please use the <a href="https://www.gnu.org/manual/"><b>man</b></a>. Part 2 and bonuses are composed of non-standard functions. They are briefly described below.

- `ft_putchar`    - output a character to stdout.
- `ft_putchar_fd` - output a character to given file.
- `ft_putstr`     - output string to stdout.
- `ft_putstr_fd`  - output string to the given file descriptor.
- `ft_putendl`    - output string to stdout with newline.
- `ft_putendl_fd` - output string to the given file descriptor.
- `ft_putnbr`     - output integer to stdout.
- `ft_putnbr_fd`  - output integer to the given file descriptor.
- `ft_itoa`       - convert integer to ASCII string.
- `ft_substr`     - extract substring from string.
- `ft_strtrim`    - trim beginning and end of string with the specified - characters.
- `ft_strjoin`    - concatenate two strings into a new string (with malloc).
- `ft_split`      - split string, with specified character as delimiter, into an - `array of strings.
- `ft_strmapi`    - create new string from modifying string with specified - function;
- `ft_striteri`   - applies a function to each character of a string;
- `ft_lstnew` - creates a new list element;
- `ft_lstadd_front` - adds an element at the beginning of a list;
- `ft_lstsize` - counts the number of elements in a list;
- `ft_lstlast` - returns the last element of the list;
- `ft_lstadd_back` - adds an element at the end of a list;
- `ft_lstclear` - deletes and free list;
- `ft_lstiter` - applies a function to each element of a list;
- `ft_lstmap` - applies a function to each element of a list;

## Grade | <a href="https://profile.intra.42.fr/users/rfelicio"> <b>rfelicio</b></a>
<h2 align="center">
	<img src="badge.png" width="150" height="150"/>
	<img src="grade.png" width="150" height="150"/>
</h2>


## Content
`./include/`: Header files;

`./src/`: Source code.

`./test`: TODO. 

## How to use

### Requirements:

The library is written in C language and thus needs the gcc/clang compiler and some standard C libraries to run. 
  - <a href="https://clang.llvm.org/"><b>Clang compiler;</b></a>
  - <a href="https://www.gnu.org/software/make/"><b>GNU Make.</b></a>

### Instructions

- Clone this repo;
- Run `make` to compile the project;
  - `make -C ./libft`, if you're compilling the libft to use in another project;
- All standard/basic rules are included: `all`, `NAME`, `clean`, `fclean`, and `re`;
- Include the header `"libft.h"` on the top of your files;
- When compilling the project that uses the `libft`, use:
```c
-lft -L ~/path/to/libft.a -I ~/path/to/libft.h
```

### Third-party testers: 

Many thanks to each one of the developers of such awesome automated tests.

- <a href="https://github.com/jtoty/Libftest.git"><b>Libftest.</b></a>;
- <a href="https://github.com/alelievr/libft-unit-test.git"><b>libft-unit-test.</b></a>;
- <a href="https://github.com/ska42/libft-war-machine"><b>libft-war-machine</b>;

## License