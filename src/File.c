
#include "EPL.h"


void CloseFile(FileHandle *handle) {
    if (*handle) {
        fclose(*handle);
    }
}
