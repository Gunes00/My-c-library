int alt_isprint(int c)
{
    if(c <= 126 && c >= 32)
        return(1);
    return(0);
}