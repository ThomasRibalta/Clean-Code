// Mauvais exemple

void additionner(int a, int b, int *resultat) { // 1
    *resultat = a + b;
}

void ft_atoi_ptr(const char *str, int *result) { // 2
    int mult;

    *result = 0;
    mult = 1;
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    if (*str == '-') {
        mult *= -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        *result = *result * 10 + (*str - '0');
        str++;
    }
    *result *= mult;
}


// Bon exemple

void additionner(int nombre1, int nombre2) {
    return (nombre1 + nombre2);
}

int	ft_atoi(const char *str)
{
	int	mult;
	int	result;

	result = 0;
	mult = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		mult *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (mult * result);
}