# get_next_line
get_next_line is a project for CODAM Coding College | 42 network.

get_next_line is able to read from the file descriptor specified on the parameter until a new line is read.
It then sets the line parameter to the line read and returns 1 in case a line is read, 0 if end of file(EOF) is reached or -1 is anything goes wrong in the process.

Every other call to get_next_line will set line to the next line until EOF is reached.

It is the caller's responsability to properly manage line's dynamic memory allocation after the call is made preferably by free'ing line in between each call.

The project has been completed and validated.
