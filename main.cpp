#include <iostream>
#include <string>
int main() {
    char s[]="1234567890AaBbCcDdEeFfGgHhXxYyZz";
    for (int i=0; i<sizeof(s)-1; i++) {
        for (int j=0; j<sizeof(s)-1; j++) {
            for (int k=0; k<sizeof(s)-1; k++) {
                for (int m=0; m<sizeof(s)-1; m++) {
                    for (int n=0; n<sizeof(s)-1; n++) {
                           std::cout << s[i] << s[j] << s[k] << s[m] << s[n] << '\n';
                       }
                    }
                }
            }
        }
    return 0;
}
