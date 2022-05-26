
void grayScale (unsigned char* data, int len) {

    for (int i = 0; i < len ; i += 4) {
            int r = data[i];
            int g = data[i+1];
            int b = data[i+2];
            int a = data[i+3];

            ////Brown1 Filter
            if (r < 100) {
                r = 255;
                g = 255;
                b = 255;
                a = 255;
            }

            if (r != 255) {
                r = 0;
                g = 0;
                b = 0; 
                a = 255;
            }
            else {
                r = 255;
                g = 255;
                b = 255;
                a = 255;
            }

            if (r == 255) {
                r = 0;
                g = 0;
                b = 0;
                a = 255;
            }
            else {
                r = 255;
                g = 255;
                b = 255;
                a = 255;
            }

        }
}


