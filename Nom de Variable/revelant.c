// Mauvais exemple
int fonction1(char *m, char *m2){
    int lm;
    int lm2;

    lm = getLenWord(m);
    lm2 = getLenWord(m2);
    if (lm > lm2)
        return (1);
    else
        return (0);
}

// Bon exemple
int getBiggestWord(char *firstWord, char *secondWord){
    int lenFirstWord;
    int lenSecondWord;

    lenFirstWord = getLenWord(firstWord);
    lenSecondWord = getLenWord(secondWord);
    if (lenFirstWord > lenSecondWord)
        return (1);
    else
        return (0);
}