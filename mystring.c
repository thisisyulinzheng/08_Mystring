#include <stdio.h>

int mystrlen(char *s) {
	int i = 0;
	while (*(s + i)) {
		i++;
	}
	return i;
}
char * mystrcpy(char *s1, char *s2) {
	int i = 0;
	while (*(s2 + i)) {
		*(s1 + i) = *(s2 + i);
		i++;
	}
	return s1;
}

char * mystrncat(char *s1, char *s2, int size) {
	int i = 0;
	while (i < size) {
		*(s1 + i + mystrlen(s1) + 1) = *(s2 + i);
		i++;
	}
	*(s1 + i + mystrlen(s1) + 1) = 0;
	return s1;
}

char * mystrchr(char *s, char c) {
	int i = 0;
	while ((*(s + i) != c) && (i < mystrlen(s) - 1)) {
		i++;
	}
	return (s + i);
}

int mystrcmp (char *s1, char *s2) {
	return 0;
}

