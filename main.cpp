#include <iostream>
#include <string>
int main() {
    char s[]="1234567890AaBbCcDdEeFfGgHhXxYyZz";
    for (int i=0; i<32; i++) {
        for (int j=0; j<32; j++) {
            for (int k=0; k<32; k++) {
                for (int m=0; m<32; m++) {
                    for (int n=0; n<32; n++) {
                           std::cout << s[i] << s[j] << s[k] << s[m] << s[n] << '\n';
                       }
                    }
                }
            }
        }
    }
    return 0;
}
