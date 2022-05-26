#include <stdint.h>

int addThree(uint8_t *buf, int len) {
  uint8_t *item;
  uint8_t *end = buf + len;

  for (item = buf; item<end; item++) {
    *item += 3;
  }

  return 0;
}

void grayScale (unsigned char* data, int len) {

    for (int i = 0; i < len ; i += 4) {
       
            if (data[i] < 100) {
                data[i] = 255;
                data[i + 1] = 255;
                data[i + 2] = 255;
            }

            if (data[i] != 255) {
                data[i] = 0;
                data[i + 1] = 0;
                data[i + 2] = 0; 
            }
            else {
                data[i] = 255;
                data[i + 1] = 255;
                data[i + 2] = 255;
            }

            if (data[i] == 255) {
                data[i] = 0;
                data[i + 1] = 0;
                data[i + 2] = 0;
            }
            else {
                data[i] = 255;
                data[i + 1] = 255;
                data[i + 2] = 255;
            }

    }
}


