#include <stdio.h>
#include <unistd.h>
#include <dlfcn.h>
#include <string.h>

ssize_t write(int files, const void *buf, size_t nbytes)
{
    ssize_t (*new_write)(int files, const void *buf, size_t nbbytes);
    ssize_t result;

    new_write = dlsym(RTLD_NEXT, "write");
    
    if (strcmp(buf, "Hello, World!") ==0)
    {
        result = new_write(files, "Goodbye, cruel world!", 21);
    }
    else{
        result = new_write(files, buf, nbytes);

    }
    return result;

}