//comprueba si un caracter es imprimible (los que no son de control)
//devuelve 1 si es imprimible (0 si no lo es)

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
    {
        return (1);
    }
    else{
        return (0);
    }
}

