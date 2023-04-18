int vsota(int n) {
    // osnovni pogoj
    if (n <= 0) {
        return 0;
    }

    // korak
    return n + vsota(n - 1);
}

