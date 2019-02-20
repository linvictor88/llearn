#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main() {
    uint16_t value = 0x01;
    uint8_t *pointer = (uint8_t *)&value;
    if (*pointer) {
        printf("Little Endian(By checking value)\n");
    } else {
        printf("Big Endian(By checking value)\n");
    }

    uint16_t n_value = htons(value);
    if (n_value != value) {
        printf("Little Endian(By network big endian)\n");
    } else {
        printf("Big Endian(By network big endian)\n");
    }
}
