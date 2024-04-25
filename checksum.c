const unsigned EOF = 0xFFFFFFFF;

int main() {
    unsigned sum = 0;
    while (1) {
        unsigned c = __builtin_delendum_read_advice();
        if (c == EOF) {
            break;
        } else {
          sum += c;
        }
    }
    __builtin_delendum_write(sum);
}
