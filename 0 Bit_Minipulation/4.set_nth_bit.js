function setBit(number, bit) {
  number = number | (1 << bit-1);
  return number;
}

let n = 10; //1010
console.log(setBit(n, 3));
