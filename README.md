# joe-compiler-design
New computer language, parser, compiler, and interpreter
for logic module to be included in another project.

**Q: How do you write down a language?** 

Using [Backus-Naur Form (BNF)](https://en.wikipedia.org/wiki/Backus%E2%80%93Naur_form)
to specify a context-free grammar for the new language.

**Q: What's the _Easy Way_?**

Link in an open source scripting engine already designed for
Python, C#, Javascript, PERL, LISP, Haskell, whatever, then call
back into my executable via 
[foreign function interface](https://en.wikipedia.org/wiki/Foreign_function_interface).

**Q: Why the _Hard Way_?**

Quoting [Introduction to Bison](https://www.gnu.org/software/bison/):

> Once you are proficient with Bison, you can use it to develop a wide range of language parsers, from those used in simple desk calculators to complex programming languages.


## GNU Bison
I'm using [GNU's Bison](https://www.gnu.org/software/bison/)
which is [YACC (yet another compiler compiler)](https://en.wikipedia.org/wiki/Yacc)

Bison is an executable program that becomes part of your build process:

How to get Bison:
- build [from source code](https://ftp.gnu.org/gnu/bison/) requires `sudo apt install m4 xsltproc`
- or install from distro `sudo apt install bison`
- might want optional lex analyzer generator `sudo apt install flex`


## Stuff I Typed In Here
- I always loved parsing data, even the hard way on Commodore 64 in BASIC
- Compiler Design in C was my favorite textbook, which I bought after dropping out of Computer Science at #OkState
- I wrote the compiler for VScript, a language of my design, to program call tree logic into VStarMail, my Norstar KSU compatible automated attendant and voice message taker running on Windows NT Server in 1996. 

