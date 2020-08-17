function ccr() { # ccr (c compile & run)
    gcc -Wall -Werror -Wextra $1.c -o $1 && ./$1
}