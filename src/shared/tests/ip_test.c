#include <stdio.h>
#include <string.h>

#include "validate_op.h"


int main(int argc, char **argv)
{
    os_ip myip;

    char *first  = argv[1];
    char *second = argv[2];

    if (!first) {
        return (1);
    }
    printf("Comparing '%s' to '%s'\n", first, second);

    if (!OS_IsValidIP(first, &myip)) {
        printf("Invalid ip\n");
    }
    else {
        printf("Valid IP: %s : %s/%d\n", first, myip.ip, myip.prefixlength);
    }

    if (OS_IPFound(second, &myip)) {
        printf("IP MATCHED!\n");
    }
    else {
        printf("DID NOT MATCH!\n");
    }

    return (0);
}

