function isEven(number) {
  return (number & 1) == 0;
}
const userInput = 4;
console.log(isEven(userInput) == true ? "Even" : "Odd");
