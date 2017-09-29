extern "C" {
#include <project.h>
}

int main() {
    PWM_Start();
    while(1) {
        PWM_WriteCompare1(128);
        CyDelay(200);
        PWM_WriteCompare1(0);
        CyDelay(200);
    }

    return 0;
}