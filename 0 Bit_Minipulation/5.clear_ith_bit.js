function clearBit1(n, k) {
  let mask = ~(1 << k-1);
  let res = n & mask;
  console.log(res);
}


function clearBit2(n, k) {
  return n & ~(1 << (k - 1));
}

clearBit1(14, 3); //10


