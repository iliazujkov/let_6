#include <iostream>
#include <string>
int main() {
    const char *s="1234567890AaBbCcDdEeFfGgHhXxYyZz";
    const size_t length = strlen(s);
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            for (int k=0; k<length; k++) {
                for (int m=0; m<length; m++) {
                    for (int n=0; n<length; n++) {
                           std::cout << s[i] << s[j] << s[k] << s[m] << s[n] << '\n';
                       }
                    }
                }
            }
        }
    return 0;
}
