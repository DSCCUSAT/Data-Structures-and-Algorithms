const arr = [1,2,3,4,5];
const rev_arr = [];

// Step - 1
for(let i = arr.length - 1; i >= 0; --i)
{
    rev_arr.push(arr[i]);
}

// Step - 2
for(let i = 0; i <= arr.length / 2; ++i)
{
    let temp = arr[i];
    arr[i] = arr[arr.length - i - 1];
    arr[arr.length - i - 1] = temp;
}
