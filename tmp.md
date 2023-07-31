.TL
This is A Temperory Document
.AU
Ayush Jayaswal
.AI
ABV-IIITM Gwalior
.PP
Prefixing a double-quoted string with a dollar sign (‘$’), such as $"hello, world", will
cause the string to be translated according to the current locale. The gettext infrastruc-
ture performs the lookup and translation, using the LC_MESSAGES, TEXTDOMAINDIR, and
TEXTDOMAIN shell variables, as explained below. See the gettext documentation for addi-
tional details not covered here. If the current locale is C or POSIX, if there are no translations
available, of if the string is not translated, the dollar sign is ignored. Since this is a form of
double quoting, the string remains double-quoted by default, whether or not it is translated
and replaced. If the noexpand_translation option is enabled using the shopt builtin (see
Section 4.3.2 [The Shopt Builtin], page 71), translated strings are single-quoted instead of
double-quoted.
The rest of this section is a brief overview of how you use gettext to create transla-
tions for strings in a shell script named scriptname. There are more details in the gettext
documentation.
