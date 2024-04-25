const unsigned EOF = 0xFFFFFFFF;
#define BUF_LEN 2048

int main() {
    unsigned buf[BUF_LEN];
    unsigned len = 0;
    while (len < BUF_LEN) {
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
