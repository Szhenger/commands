# Commands

#### Description

At the command-line interface, writing and executing code becomes more time-efficient; however, the commands that enable these workflows are specific to the operating system upon which the machine is running. For instance, the Linux and Mac Operating Systems have much overlap with respect to command names (since both are based upon the Unix Operating System); however, the Window Operating System differ in many command names such as ls (list) for Mac and Linux and dir (list) for Windows. Therefore, many commands native to the Mac, Windows, and Linux Operating Systems are implemented here as C files to obtain the functionality of these commands regardless of operating systems. 

#### Specification
`copy.c` is a command line program written in C that implements the Linux cp command. In particular, the algorithm written directly reads the input file by char word into a buffer char and writes to an output file; hence, is correct by induction. Moreover, since the input file must have every char read for a copy operation to perform correctly, every algorithm that implements a copy operation must occur at least linear-time. 

`get.c` is a command-line program written in C that implements the Linux pwd command. By reading the file, the algorithm clearly directly obtains the working directly path in constant-time; hence, no argument for correctness is necessary. With respect to design, the program uses C standard library function to get the working directory; hence, the design is optimal assuming the getcwd function is optimzed. 

`list.c` is a command-line program written in C that implements the Linux ls command with additional statistics. Given the algorithm written to implement this interface, we employ the directory stream data structure to access the files in the current working directory to get the filenames and additional statistics about the type, size, inode number, and user. Since the functions directly access the stream, we can view that the design is optimal for C in terms of time-efficiency. 

`remove.c` is a command-line program written in C that implements the Linux rm -f command. This operation only requires a constant number of function calls so the readability of the file is clear; hence, is correct. Assuming the C remove function is optimized, we can view that the design is optimal. 

`set.c` is a command-line program written in C that implements the Linux mv command. Similar to the analysis of `remove.c`, the logic and structure of `set.c` is correct. Assuming the C rename function is optimized, the design is optimal.
