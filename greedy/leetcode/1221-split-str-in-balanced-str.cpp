int balancedStringSplit(char* s) {

    int i = 0;
    int R_count = 0;
    int L_count = 0;
    int total = 0;
    while(s[i] != '\0')
    {
        if (R_count == L_count && R_count != 0)
            total++;
        if (s[i] == 'R')
            R_count++;
        else
            L_count++;
        i++;
            

    }
    return total + 1;
    
}
