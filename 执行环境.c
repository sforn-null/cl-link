#include<stdio.h>

//1.程序必须载入内存中。
//2.程序的执行开始，调用main函数
//3.开始执行程序代码。
//这个时候程序将使用一个运行时堆栈（stack），
//存储函数的局部变量和返回地址。
//程序同时也可以使用静态（static）内存，
//存储于静态内存中的变量在程序的整个执行过程一直保留他们的值
//4. 终止程序。正常终止main函数；也有可能是意外终止。