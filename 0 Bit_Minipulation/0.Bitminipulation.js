const bitwiseOperator = () => {
  const a = 5; //0101
  const b = 10; //1010       //8421
  const bitwiseAnd = a & b; // 0000
  const bitwiseOr = a | b; // 1111 (15)
  const bitwiseXor = a ^ b; // 1111 (15)
  const bitwiseNor = ~a; // 5=0101 1010(inverse all bits)
  const leftShfit = a << 1; //0101 1010 (10)
  const rightShfit = a >> 1; //0101 0010 (2)

  console.log(`A&B = ${bitwiseAnd}`);
  console.log(`A|B = ${bitwiseOr}`);
  console.log(`A^B = ${bitwiseXor}`);
  console.log(`A~ = ${bitwiseNor}`);
  console.log(`A<< = ${leftShfit}`);
  console.log(`A>> = ${rightShfit}`);
};

const leftShiftInLoop = () => {
  for (let i = 1; i <= 10; i++) {
    console.log(i << 1); // print table 2 to 10
  }
};

leftShiftInLoop();
bitwiseOperator();
