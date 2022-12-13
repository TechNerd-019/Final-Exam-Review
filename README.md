# Final-Exam-Review

This repository holds all of the source code I developed for reviewing purposes in preparation for the PROG71985 course final exam. The code is written in C language,
and includes an example per topic discussed and evaluated throughout the semester. My gratitude goes to Dr. Steve H. for his time with spent us teaching the course,
and Stephen Prata, author of the C Primer Plus textbook I used to lean C programming.

# Topics

The topics covered in this review go as follows:
- Print Statements and basic Input / Output.
- Conditionals, Booleans, and Looping.
- Linked Lists, ADTs, Structures, and Arrays of Structures.
- File I/O, and Command Line Arguments.
- Recursion (Comming Soon).

# Additional Preparation

In addition to developing source code material, I also studied theory notes from the aforementioned, C Primer Plus textbook, and wrote some mockup, theory quizzes with
the purpose of testing and strenghtening my theoretical understanding of the C programming language.

# Additional Comments

Please note that the "File IO.exe" program requires taking a text file as a command line argument. The program will not crash when running without it, but will halt
functionality and notify the user of the missing text file. If compiling in Visual Studio, ensure to be using a text file inside project properties, as these do not
carry from machine to machine during cloning process from GitHub.

To do this, launch Visual Studio in the, already cloned, repository directory, and select the File IO solution file. Right click on the .sln file inside the Solution
Explorer, and select Properties. Select the Debugging option from the left menu, and click on the Command Line Arguments textbox. Type any file name you want, and append
a ".txt" at the end. Create this file inside the project directory, where all the .c and .h files are situated. Using this approach, no disclosure of directory is  
required. The directory may be disclosed if the text file is in a different location other than the aforementioned project directory.

The procedure for different IDEs may vary.
