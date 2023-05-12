# c_25_passedByReference

## DESCRIPTION

This program demonstrates how arrays are **passed by reference** and not by value.

Most variables in C are **passed by value**. This means, if we use the variable in a function call, the function will get a copy of the variable.

```c
int main(void)
{
    int c = 2;

    // callMyFunc will get a copy of c
    int x = callMyFunc(c);
    // Here c value will be the same as before the callMyFunc; c = 2
    // x value will be 3
}

int callMyFunc(int variable)
{
    variable++;
    return variable;
}
```

With arrays the function will get the actual array we declared so we have to be careful to not change its value in a function.

```c
int main(void)
{
    int array[2] = {1, 2};

    // callMyFunc will get the reference of the array
    int x = callMyFunc(array);
    // x value will be 2
    // array[0] = 1 -> this is because in return the value of the variable is not modified
    // array[1] = 5
}

int callMyFunc(int variable[])
{
    variable[1] = 5;
    return variable[0]++;
}
```

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
