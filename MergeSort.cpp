    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    while (i <= mid)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}