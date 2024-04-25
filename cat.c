// Example usage:
// morgan@aristotle:~/code/lita/issue/examples$ .llvm-valida/build/bin/clang -c -target delendum ./valida-c-examples/cat.c 
// morgan@aristotle:~/code/lita/issue/examples$ ./llvm-valida/build/bin/ld.lld --script=./llvm-valida/valida.ld ./cat.o 
// morgan@aristotle:~/code/lita/issue/examples$ ./valida/target/release/valida run ./a.out log
// 12345
// morgan@aristotle:~/code/lita/issue/examples$ cat log
// 12345

const unsigned EOF = 0xFFFFFFFF;

int main() {
    unsigned c = 0;
    while (1) {
        c = __builtin_delendum_read_advice();
        if (c == EOF) {
            break;
        } else {
            __builtin_delendum_write(c);
        }
    }
}
