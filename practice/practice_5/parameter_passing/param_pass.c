void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void main()
{
    int value = 2, list[5] = {1, 3, 5, 7, 9};
    swap(value, list[0]);
    swap(list[0], list[1]);
    swap(value, list[value]);
}

// Write other codes to pass by value and pass by reference and pass by value-result.