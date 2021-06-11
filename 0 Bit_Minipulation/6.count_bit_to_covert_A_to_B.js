function flippedBits(a, b) {
  return countBit(a ^ b);
}

function countBit(n) {
  let count = 0;
  while (n != 0) {
    count++;
    n &= (n - 1);
  }
  return count;
}
console.log(flippedBits(13, 12));
