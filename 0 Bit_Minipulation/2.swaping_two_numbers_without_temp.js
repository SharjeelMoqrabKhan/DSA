function swapNumbers() {
  let number0 = 5; // 101
  let number1 = 7; // 111
  console.log(`Unswaped Numbers: ${number0} ${number1}`);
  number0 = number0 ^ number1; // 101^111 010 = 2
  number1 = number0 ^ number1; // 010^111 101 = 5
  number0 = number0 ^ number1; // 010^101 111 = 7
  console.log(`after swaping by using xor: ${number0} ${number1}`);
}

swapNumbers();
