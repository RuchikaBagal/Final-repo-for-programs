int compareStrings(const char *str1, const char *str2) {
    if (strcmp(str1, str2) == 0) {
        return 0; // Strings are equal
    } else {
        return -1; // Strings are not equal
    }
}
