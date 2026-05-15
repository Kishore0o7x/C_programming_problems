/*
## 🤯 Can a C Program Run Without `main()`?

This program uses the **C preprocessor** and the **token pasting operator (`##`)** to generate the `main()` function indirectly.

### ❓ Question
Can you figure out how `kishore` becomes `main` internally? 👀

⚡ A fun example of macro expansion and token manipulation in C programming.*/



#include<stdio.h>
#include<conio.h>
#define pop(a,b,c,d,e,f)    d##a##c##b
#define kishore pop(a,n,i,m,a,l)
void kishore()
{
    printf("this execute without main");
}
