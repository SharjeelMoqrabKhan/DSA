function findUniqueElements(arr) {
  let xxory = 0;
  //find the all element xor
  for (let index = 0; index < arr.length; index++) {
    xxory = xxory ^ arr[index]; // 5^4^1^3^4^2^5^1 -> 3^1-> 01
  }
  //getting RSB set via masking // 01 = 01 & 11
  let rsbs = xxory & -xxory;

  let x = 0; // set bit part
  let y = 0; // unset bit part

  // Traversing the array again
  for (let index = 0; index < arr.length; index++) {
    if (arr[index] & (rsbs == true)) {
      // if rsb is unset
      x = x ^ arr[index];
    } else {
      //if rsb is set
      y = y ^ arr[index];
    }
  }
  console.log(x); //3
  console.log(y); //2
}

let arr = [5, 4, 11, 3, 4, 2, 5, 11];
findUniqueElements(arr);
