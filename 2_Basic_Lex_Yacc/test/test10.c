int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
	int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}