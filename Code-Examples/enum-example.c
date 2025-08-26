#include <stdio.h>

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main() {

    Status status = PENDING;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status){

    switch (status){
        case SUCCESS:
            printf("Connection was successful.\n");
            break;
        case FAILURE:
            printf("Connection failed.\n");
            break;
        case PENDING:
            printf("Connecting...");
            break;
        default:
            break;
    }
}