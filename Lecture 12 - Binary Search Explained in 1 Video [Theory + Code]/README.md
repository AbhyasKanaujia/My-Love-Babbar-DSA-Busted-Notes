# Lecture 12: Binary Search 

## Algorithm

1. Get the middle element of the array
2. if(`a[mid]` == `x`) return `mid`
3. else if(`a[mid]` > `x`) search in the left half
4. else search in the right half

## Implementation

```cpp
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) // found 
            return mid;
        if(key > arr[mid])  // go to right half
            start = mid + 1;
        else                // got to left half
            end = mid - 1;
    }
    return -1;
}
int main(){

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};
}

```

## Finding Mid

Max size of int is 2^31 - 1. Upon adding start and end, the sum might exceed the max size of int. To prevent this, we can use the following formula:

<!-- $$
mid = start + \frac{end - start}{2}
$$ --> 

<div align="center"><img style="filter: invert(1);text-shadow: 2px 2px #ff0000;" src="https://render.githubusercontent.com/render/math?math=mid%20%3D%20start%20%2B%20%5Cfrac%7Bend%20-%20start%7D%7B2%7D%0D"></div>

## Time Complexity

Starting with 1000 elements. Next iteration needs only half the elements i.e. 500 and so on. 

Thus the size decreases as:

n -> n/2 -> n/4 -> ... -> n/2^k

where in the end there will be 1 element 

Thus n/2^k = 1

=> k = log(n)

Thus the time complexity is <!-- $O(log(n)$ --> <img style="transform: translateY(0.1em); filter: invert(1);" src="https://render.githubusercontent.com/render/math?math=O(log(n)">

## Properties
- Elemens must be in monotonic order; increasing or decreasing