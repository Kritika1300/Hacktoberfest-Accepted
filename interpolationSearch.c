# include <stdio.h>
int interpolation_Search(int array_nums[], int array_size, int n)
{
    int lower_pos = 0, higher_pos = array_size - 1;
    while (lower_pos <= higher_pos && n >= array_nums[lower_pos] && n <= array_nums[higher_pos])
    {
        int n_pos = lower_pos + ((n - array_nums[lower_pos]) * (higher_pos - lower_pos)) / (array_nums[higher_pos] - array_nums[lower_pos]);
        if (n > array_nums[n_pos])
            lower_pos = n_pos + 1;
        else if (n < array_nums[n_pos])
            higher_pos = n_pos - 1;
        else  
            return n_pos;
    }
    return -1;
}