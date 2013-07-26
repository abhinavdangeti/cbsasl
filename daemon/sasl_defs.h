#ifndef SASL_DEFS_H
#define SASL_DEFS_H 1

// Longest one I could find was ``9798-U-RSA-SHA1-ENC''
#define MAX_SASL_MECH_LEN 32

#include "isasl.h"
void init_sasl(void);
void shutdown_sasl(void);

#define SOCKET int
//typedef void* sasl_conn_t;

#define SASL_OK 0
#endif /* SASL_DEFS_H */
