const unsigned EOF = 0xFFFFFFFF;

int main() {
    unsigned buf[2048];
    unsigned len = 0;
    while (1) {
        unsigned c = __builtin_delendum_read_advice();
        if (c == EOF) {
            break;
        } else {
            buf[len] = c;
            len++;
        }
    }
    for (unsigned i = 0; i < len / 2; i++) {
        unsigned j = len - 1 - i;
        unsigned tmp = buf[i];
        buf[i] = buf[j];
        buf[j] = tmp;
    }
    for (unsigned i = 0; i < len; i++) {
        __builtin_delendum_write(buf[i]);
    }
}
