
#include "EPL.h"


int main(int argc, char *argv[])
{
    INITIALIZE_RANDOM_NUMBER_GENERATOR(NULL);
    
    FileHandle outputFile = NULL;

    for (int i = 1; i < argc - 1; i++) {
        if (StringsAreEqual(argv[i], "--file")) {
            outputFile = fopen(argv[i+1], "w");
        }
    }

    FileHandle outputHandle = (!outputFile) ? stdout : outputFile;

    for (int i = 0; i < 20; i++) {
        int r = rand() % 1000 + 1;

        fprintf(outputHandle, "%d\n", r);
    }

    CloseFile(&outputFile);

    return EXIT_SUCCESS;
}
