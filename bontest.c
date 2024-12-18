.TH _PRINTF 3 "November 2024" "Standard library c" "Custom functions"
/**
 * .TH - Title Header: macro utilisée pour définir le titre et les informations de la man page.
 * _PRINTF: le titre de la page
 * 3: la commande appartient à la section 3 des manuels linux, càd celle dédiée aux fonctions de la bibli standard. Même si notre fonction est personnalisée ça reste une dérivée de printf
 * November 2024: la manpage a été revised en nov 24
 * Standard library C: dédiée aux fonctions de la bibli standard
 * Custom functions: notre man page est dédiée à une fonction customisée dérivée de la fonction standar printf
 */

.SH NAME
/** Section header: macro utilisée pr définir une nvelle section ds la manpage */
.B /** B, Bold, met en gras le texte qui le suit */
_printf \: outputs formatted data to stdout

.SH SYNOPSIS

.B #include "main.h"
.PP /** Macro pr commencer nouveau paragraphe sans indentation spécifique*/
.B int _printf(const char *format, ...);

.SH DESCRIPTION

The function
.B _printf
produces an output according to a format. It is a simplified version of the standard C library function
.B printf.
It can handle various format specifiers like characters, strings, integers, and percentages.
.PP
This tailored function takes a format string and a variable number of arguments. Said format string contains the specifiers, while the arguments provide the values for each specifier.

.SH FORMAT SPECIFIERS

The function handles the following format specifiers:
.TP /** Tag Paragraph: définit une entrée ds une liste de type "tag", ça permet de faire une liste où le tag (nom d'une option de commande ou d'un argument) est suivi par une description*/
.BR %c /** BR met en gras des options ou args de commande et autres termes importants ds une manpage*/
Prints one character. Takes one argument that is the character to be printed.
.TP
.BR %s
Prints a string of characters. Takes one argument, the string to be printed.
.TP
.BR %d
Prints a signed decimal integer. Takes one argument, the integer to be printed.
.TP
.BR %i
Prints a signed integer. As the 'd' specifier, it takes one argument that is the integer to be printed.
.TP
.BR %%
Prints a literal percent sign. No argument is needed.
.TP
Other characters in the format string are copied to the output verbatim, and unknown format specifiers are handled by printing the literal '%' and the following character.

.SH RETURN VALUE

The function
.B _printf
returns the number of characters that are printed (excluding the null byte that is used to end output to strings). In case of error (e.g., the format string is null), the function returns -1.

.SH EXAMPLES

.PP
To print a string:
.EX /** macro qui marque le début d'un bloc d'exemple */
_printf("Hello there... %s!\n", "General Kenobi");
.EE /** End example, marque la fin du bloque d'exemple et donc de sa mise en forme spécifique */
Output:
.EX
Hello there... General Kenobi!
.EE
.PP
To print an integer:
.EX
_printf("The answer is %d.\n", 42);
.EE
Output:
.EX
The answer is 42.
.EE

.PP
To print a percentage sign:
.EX
_printf("Success is 99 %% failure!\n");
.EE
Output:
.EX
Success is 99 % failure!
.EE

.SH ERRORS
The function returns -1 if:
.IP (bu 2) /** IP: Indented Paragraph: permet de faire liste à puces, càd bullet points, et (bu 2):  */
The format string is NULL.
.IP (bu 2)
The format string is just a '%' without a valid specifier.

.SH SEE ALSO
.B printf(3), - standard output formatting function from the C library.

.SH AUTHORS
Written by Colombe Deveaud and Shems Alilat
