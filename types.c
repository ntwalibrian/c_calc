#include <stdio.h>

// typedef char String[70];
// typedef char Initials[3];

// int main() {

//     //typedef existing_type new_name; giving it a  nick name

//     String user_name ="Bob marley";
//     Initials user_initial = "BC";
//     printf("%s with in: %s",user_name,user_initial);


//     return 0;
// }

//enums

typedef enum{
    SUCCESS,FAILURE,PENDING
}Status;

void connectStatus(Status status);

int main() {
    
    Status status = SUCCESS;
    connectStatus(status);
    return 0;
}

void connectStatus(Status status) {
    switch(status) {
        case SUCCESS :
            printf("connected");
            break;
        case FAILURE:
            printf("failed toconnect");
            break;
        case PENDING:
            printf("connecting .....");
            break;
    }
}