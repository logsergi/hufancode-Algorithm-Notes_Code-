算法笔记 - 第 2 章 C/C++ 快速入门

本仓库记录了《算法笔记》（胡凡、曾磊著）第 2 章的习题代码与学习笔记。本章内容涵盖了 C/C++ 的基础语法、控制结构、函数、指针及结构体，是后续算法学习的基石。

目录结构

本章代码按小节分类，具体结构如下：

- 2.1 基本数据类型
  - 变量定义、类型转换、常量、运算符
- 2.2 顺序结构
  - 输入输出（scanf/printf、getchar/putchar）、typedef、数学函数
- 2.3 选择结构
  - if 语句（嵌套）、switch 语句
- 2.4 循环结构
  - while、do-while、for 循环、break/continue
- 2.5 数组
  - 一维/二维数组、冒泡排序、memset 初始化、字符数组、string.h、sscanf/sprintf
- 2.6 函数
  - 函数定义、main 函数进阶、数组作为参数、递归调用
- 2.7 指针
  - 指针变量、指针与数组、引用
- 2.8 结构体
  - 结构体定义、初始化、元素访问
- 2.9 补充内容
  - cin/cout、浮点数比较、时间复杂度
- 2.10 黑盒测试
  - 单点测试、多点测试

理论重难点

针对本章的核心理论难点，已整理成 txt 文件上传，包含：

1. 浮点数精度问题：如何正确比较浮点数（fabs(a - b) < 1e-8）。
2. 指针与引用：指针变量的定义、指针与数组的关系、引用作为函数参数的区别。
3. 递归调用：递归的终止条件与栈溢出风险。
4. 结构体内存对齐：结构体的初始化与内存布局。

编译与运行

所有代码均使用 C++11 标准编写，编译命令如下：

g++ -std=c++11 -o output_filename source_filename.cpp

学习建议

1. 动手实践：建议逐行调试代码，理解每行语句的作用。
2. 重点突破：重点关注指针、递归和结构体的使用，这些是后续算法题的高频考点。
3. 黑盒测试：利用 多点测试 模板验证代码的鲁棒性。

参考资料

- 《算法笔记》胡凡、曾磊著
- C++ Primer（第 5 版）



Algorithm Notes - Chapter 2: C/C++ Quick Start

This repository contains the code implementations and study notes for Chapter 2 of "Algorithm Notes" (by Hu Fan and Zeng Lei). This chapter covers the fundamental syntax of C/C++, including control structures, functions, pointers, and structs, which are essential for subsequent algorithm learning.

Directory Structure

The code is organized by subsections as follows:

- 2.1 Basic Data Types
  - Variable definition, type casting, constants, operators
- 2.2 Sequential Structure
  - I/O (scanf/printf, getchar/putchar), typedef, math functions
- 2.3 Selection Structure
  - if statements (nested), switch statements
- 2.4 Loop Structure
  - while, do-while, for loops, break/continue
- 2.5 Arrays
  - 1D/2D arrays, bubble sort, memset initialization, character arrays, string.h, sscanf/sprintf
- 2.6 Functions
  - Function definition, advanced main function, arrays as parameters, recursion
- 2.7 Pointers
  - Pointer variables, pointers and arrays, references
- 2.8 Structs
  - Struct definition, initialization, element access
- 2.9 Supplementary Topics
  - cin/cout, floating-point comparison, time complexity
- 2.10 Black-box Testing
  - Single-point testing, multi-point testing

Key Theoretical Points

The core theoretical difficulties of this chapter have been summarized in uploaded txt files, including:

1. Floating-point Precision: How to correctly compare floating-point numbers (fabs(a - b) < 1e-8).
2. Pointers and References: Definition of pointer variables, relationship between pointers and arrays, and the difference between references as function parameters.
3. Recursion: Termination conditions and stack overflow risks.
4. Struct Memory Alignment: Initialization and memory layout of structs.

Compilation and Execution

All code is written in C++11 standard. Use the following command to compile:

g++ -std=c++11 -o output_filename source_filename.cpp

Learning Suggestions

1. Hands-on Practice: Debug the code line by line to understand the role of each statement.
2. Focus on Key Points: Pay special attention to pointers, recursion, and structs, as these are high-frequency topics in subsequent algorithm problems.
3. Black-box Testing: Use the multi-point testing template to verify the robustness of your code.

References

- "Algorithm Notes" by Hu Fan and Zeng Lei
- C++ Primer (5th Edition)