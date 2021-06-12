function findNonReaptingElement() {
  let differentElement = 0;
  let arr = [5, 4, 1, 4, 7, 5, 1];
  for (let i = 0; i < arr.length; i++) {
    differentElement = (differentElement ^ arr[i]);
  }
  console.log(differentElement);
}

findNonReaptingElement();
