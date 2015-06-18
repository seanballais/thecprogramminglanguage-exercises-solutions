# The C Programming Language 2nd Edition Exercises Solutions

This repository contains my solutions to the exercises in the book, *The C Programming Language 2nd Edition By Dennis Ritchie and Brian Kernighan*. A makefile is provided to compile the solutions.    
    
You may use the source code in any way possible as per the license (See [LICENSE](LICENSE)). But it would be nice if you attribute me if you used any of the source code in this repository, though that is not required.    
    
For any questions, inquiries, or opinions, please contact me through [Twitter](https://www.twitter.com/seanballais), [LinkedIn](https://www.linkedin.com/in/seanballais), or [email](mailto:sfballais123@gmail.com).

### Compiling the Source Codes
You must have *make* preinstalled in your system before compiling the sources. The `makefile` only supports compilation in any Unix-like operating systems (such as Linux and, BSD) that has the `cc` C compiler. Theoretically, the sources code could be compiled under OS X.

Compiling all chapter exercises solutions:

    cd /path/to/this/repo    
    make # or make all    

Compiling a specific chapter:
    
    cd /path/to/this/repo    
    make chapter<chapter number> # chapter numbers start at 01

Compiling a specific chapter exercise solution:
    
    cd /path/to/this/repo
    make chapter<chapter number>-dir # creates directories where the compiled executable will be placed
    make chapter<chapter number>-exer<exercises number> # chapter and exercise numbers start at 01

NOTE: Exercises in the book are numbered as <chapter number>.<exercise number> (e.g. `1.5`) while the exercises solutions in this repo are numbered as exer`<exercise number>` (e.g. `exer05`) with its parent directory named after the exercise's chapter (e.g. `chapter01`).

### Contributing
I do not currently accept pull requests that provides solutions to an exercise that I haven't tackled yet. For the moment, I will only accept pull requests that improves the grammar in this README or any comments in the current source files; and revisions of any solutions to any exercises that I have already tackled on, if it provides a better implementation of the solution.

Copyright &copy; 2015 Sean Francis N. Ballais. All Rights Reserved.