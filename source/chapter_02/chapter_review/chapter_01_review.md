#Chapter 1 Review  

## Question 1  
**What are the modules of C++ programs called?**  

The word module is not an official term but a C++ program can still conceptually be divided into modules in several different ways.  

A program is frequently divided into several separate source files that are compiled separately and then linked together. Each such module is known as a translation unit.  

Each source file is also generally divided into separate modules that are called functions.  

## Question 3  
**What does the following preprocessor directive do?**  

```cpp
#include <iostream>
```
This preprocessor directive will include the contents of the header file called iostream into the source file.  

## Question 4  
**What does the following statement do?**  

```cpp
using namespace std;
```
This statement makes it possible to use all the symbols in the std namespace without adding the namespace prefix. For example so can you then write:  

```cpp
cout << "Hello World!";
```
instead of  
```cpp
std::cout << "Hello World!";
```
Note that is considered bad practice to use this and similar statements that can lead to nasty bugs.   
