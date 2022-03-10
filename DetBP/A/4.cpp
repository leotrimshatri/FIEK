// a
int shuma(int vargu[], int gjatesiaVargut) {
    int s = 0;
    for (int i = 0; i < gjatesiaVargut; i++) {
        s += vargu[i];
    }

    return s;
}

// b
int shuma(int vargu[], int gjatesiaVargut, int fillimi) {
    if (fillimi > gjatesiaVargut - 1) {
        return -1;
    }

    int s = 0;

    for (int i = fillimi; i < gjatesiaVargut; i++) {
        s += vargu[i];
    }

    return s;
}
