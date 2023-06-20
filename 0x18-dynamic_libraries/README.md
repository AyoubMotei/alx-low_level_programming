<!DOCTYPE html>
<html>
<head>
  <title>  </title>
</head>
<body>
  <h1>alx-low_level_programming</h1>
  <p>This repository contains solutions to various programming tasks related to low-level programming in C.</p>
  <h2>Directory: 0x18-dynamic_libraries</h2>
  <p>This directory contains files related to dynamic libraries and code injection.</p>
  <h3>Task 0: A library is not a luxury but one of the necessities of life</h3>
  <p>Create the dynamic library <code>libdynamic.so</code> containing various functions such as <code>_putchar</code>, <code>_islower</code>, <code>_isalpha</code>, <code>_abs</code>, and more. The library should be compiled and stored in the repository. The <code>main.h</code> file, containing the prototypes of all the functions, should also be included in the repository.</p>
  <h3>Task 1: Without libraries what have we? We have no past and no future</h3>
  <p>Create a script <code>1-create_dynamic_lib.sh</code> that generates a dynamic library <code>liball.so</code> from all the C files present in the current directory. The resulting library should contain all the functions defined in the individual C files. The compiled library should be stored in the repository.</p>
  <h3>Task 2: Let's call C functions from Python (Advanced)</h3>
  <p>Create a dynamic library <code>100-operations.so</code> that contains C functions which can be called from Python. The provided example <code>100-tests.py</code> demonstrates the usage of these functions. The library should be compiled and stored in the repository.</p>
  <h3>Task 3: Code injection: Win the Giga Millions! (Advanced)</h3>
  <p>Create a shell script <code>101-make_me_win.sh</code> that, when run on the same server where the Giga Millions program runs, will make the user win the jackpot. The shell script should be short (maximum 3 lines) and should run two commands. It should be executed by a specific user (<code>mss</code>) on the server, and the commands should be run 98 seconds before the Giga Millions program is executed with specific numbers. The script should upload a single file to the server (shell script itself) and delete it after execution. The provided program <code>gm</code> should not be modified. The necessary details and restrictions are mentioned in the task description.</p>
</body>
</html>






