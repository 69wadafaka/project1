//zawijanie dookola alfabetu:
przesun = przesun % ('Z' - 'A');//zeby nie wyjechac dalej niz trzeba

char znak;//duza litera

if (znak < 'A')
	znak += 'Z' - 'A';
if (znak > 'Z')
	znak -= 'Z' - 'A';