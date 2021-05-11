#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    if (*stack == NULL)
    {
        _Error(Error_malloc, op_value, line_number);
    }

    line_number = (*stack)->n;

    fprintf(stdout, "%d\n", line_number);
}