#ifndef TO_BYTE_CODE_H
#define TO_BYTE_CODE_H

#include <stdio.h>

#include "Input.h"

#include "../Main/Config.h"

#include "../Main/Commands.h"

Errors process_input_commands(FILE *dest, const Data *src);

#endif // TO_BYTE_CODE_H