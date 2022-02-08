/**
*_isalpha - function that indicates if is a letter, lowercase or uppercase.
*@c: character to validate.
*Return: 1 for true; 0 for false.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
