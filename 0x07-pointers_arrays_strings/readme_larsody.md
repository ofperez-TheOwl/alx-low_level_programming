0. memset
-0-memset.c - a function that fills memory with a constant byte.

1. memcpy
-1-memcpy.c - a function that copies memory area.

2. strchr
-2-strchr.c- a function that locates a character in a string.

3. strspn
-3-strspn.c - a function that gets the length of a prefix substring.

4. strpbrk
-4-strpbrk.c - a function that searches a string for any of a set of bytes.

5. strstr
-5-strstr.c - a function that locates a substring.

6. Chess is mental torture
7-print_chessboard.c- a function that prints the chessboard.
7. The line of life is a ragged diagonal between duty and desire
8-print_diagsums.c - a function that prints the sum of the two diagonals of a square matrix of integers.
8. Double pointer, double fun
-100-set_string.c - a function that sets the value of a pointer to a char.

My primary goal of hacking was the intellectual curiosity, the seduction of adventure
101-crackme_password - a file that contains the password for the crackme2 executable.

Steps to Get the Password
a. Clone the file - crackme2
b. Install openssl,
Type the command: sudo apt install libssl-dev
c. Edit the source list
Type the command: sudo nano /etc/apt/sources.list
Add this to the file: deb http://security.ubuntu.com/ubuntu xenial-security main
Exit nano
Type the command: sudo apt update
Type the command: sudo apt install libssl1.0.0
d. In the 0x06.c directory
First run the file: $ ./crackme2
Note the response
e. Test the file type
Do: $ file crackme2
Note the response
f. Do ltrace on your terminal
Do: $ ltrace ./crackme2
Note the last strings like this: strncmp("_=/usr/bin/ltrace", "jennieandjayloveasm=", 20) = -11
Copy this string: jennieandjayloveasm
g. Do this next on your terminal
$ export jennieandjayloveasm=hey
ltrace ./crackme2
Note the response: strcmp("d8578edf8458ce06fbc5bb76a58c5ca4"…, "6057f13c496ecf7fd777ceb9e79ae285"…) = 46
Copy the md5 hash: d8578edf8458ce06fbc5bb76a58c5ca4
h. Go to this website to convert the md5 hash to string: md5 site
the result is the abc123.
i. Now enter the following command your terminal
echo -n 'abc123' > 101-crackme_password
chmod u+x 101-crackme_password
j. Push to your github
