
int main()
{
    int j = -3;

    for (int i = 0; i < 3; i++)
    {
        switch (j + 2)
        {
        case 3:
        case 2:
            j--;
            break;
        case 0:
            j += 2;
            break;
        default:
            j = 0;
        }

        if (j > 0)
            break;

        j = 3 - 1;
    }
}