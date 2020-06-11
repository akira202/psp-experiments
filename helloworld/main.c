#include <pspkernel.h>
#include <pspdebug.h>
#include <pspdisplay.h>
#include "../common/callback.h"

PSP_MODULE_INFO("HELLO WORLD", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_VFPU | THREAD_ATTR_USER);
PSP_HEAP_SIZE_KB(-1024);

int main(int argc, char* argv[])
{
    setupCallbacks();
    pspDebugScreenInit();
    pspDebugScreenSetXY(0, 0);
    pspDebugScreenPrintf("Hello World!");
    
    while(running()) {}
    sceKernelExitGame();    
    return 0;
}