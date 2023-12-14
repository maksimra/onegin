void bubble_sort (Lines* onegin, size_t line_counter)
{
    for (int pass = 0; pass < line_counter - 1; pass++)
    {
        int nswap = 0;
        for (int i = 0; i < line_counter - pass - 1; i++)
        {
            if (my_strcmp (onegin[i].ptr, onegin[i + 1].ptr) > 0)
            {
                swap (onegin, i);
                nswap += 1;
            }
        }
        if (nswap == 0)
            break;
    }
}
//void end_bubble_sort (struct Lines* onegin, size_t line_counter) // спросить более опытных собратьев

/*int comp(const void* s1, const void* s2)
{
    return my_strcmp((const char*) s1, (const char*) s2);
}*/

int my_strcmp (char *s1, char *s2)
{
    int pos = 0;
    // *(s1 + pos) <=> s1[pos]
    for ( ; *(s1 + pos) != 0 && *(s2 + pos) != 0; pos++)
    {
        if (*(s1 + pos) != *(s2 + pos))
            break;
    }
    int pos1, pos2;
    pos1 = pos2 = pos;
    while (*(s1 + pos1) != 0 && *(s2 + pos2) != 0)
    {
        if (isalpha(*(s1 + pos1)) && isalpha (*(s2 + pos2)))
        {
            if (*(s1 + pos1) > *(s2 + pos2))
                return 1;
            else if (*(s1 + pos1) < *(s2 + pos2))
                return -1;
        }
        while (!isalpha(*(s1 + pos1)))// while, что на буквах
            pos1++;
        while (!isalpha(*(s2 + pos2))) //в цикле сидеть пока буквы или пробел
            pos2++;
    }
    return 0;
}

void swap (struct Lines* onegin, int i)
{
    char* temp = NULL;
    temp = onegin[i].ptr;
    onegin[i].ptr = onegin[i + 1].ptr;
    onegin[i + 1].ptr = temp;
    int temp_lenght = 0;
    temp_lenght = onegin[i].lenght;
    onegin[i].lenght = onegin[i + 1].lenght;
    onegin[i + 1].lenght = temp_lenght;
}

    {
        if (buffer_stdfread[k] == '\r')
        {
            line_counter++;
            buffer_stdfread[k] = '\0';
            // k++;
            continue;
        }
        if (buffer_stdfread[k] == '\n')
        {
            // line_counter++;
            buffer_stdfread[k] = '\0';
            continue;
        }
    }
    if (buffer_stdfread[size - 1] != '\n' && buffer_stdfread[size - 1] != '\r')
        line_counter++;

    return line_counter;
}
