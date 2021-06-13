// This function sets the values of
// *x and *y to non-repeating elements
// in an array arr[] of size n
function UniqueNumbers2(arr, n) {
  let sum = 0;
  for (let i = 0; i < n; i++) {
    // Xor all the elements of the array
    // all the elements occurring twice will
    // cancel out each other remaining
    // two unique numbers will be xored
    sum = sum ^ arr[i];
  }

  // Bitwise & the sum with it's 2's Complement
  // Bitwise & will give us the sum containing
  // only the rightmost set bit
  sum = sum & -sum;

  // sum1 and sum2 will contains 2 unique
  // elements elements initialized with 0 box
  // number xored with 0 is number itself
  let sum1 = 0;
  let sum2 = 0;

  // Traversing the array again
  for (let i = 0; i < arr.length; i++) {
    // Bitwise & the arr[i] with the sum
    // Two possibilities either result == 0
    // or result > 0
    if ((arr[i] & sum) > 0) {
      // If result > 0 then arr[i] xored
      // with the sum1
      sum1 = sum1 ^ arr[i];
    } else {
      // If result == 0 then arr[i]
      // xored with sum2
      sum2 = sum2 ^ arr[i];
    }
  }

  // Print the the two unique numbers
  console.log("The non-repeating " + "elements are " + sum1 + " and " + sum2);
}

let arr = [5, 4, 1, 3, 4, 2, 5, 1];
let n = arr.length;

UniqueNumbers2(arr, n);

// This code is contributed by vaibhavrabadiya117.
