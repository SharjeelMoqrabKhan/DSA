function find(num, i) {
  let bitStatus = num & (1 << i > 0);
  if (bitStatus) {
    console.log("set");
  } else {
    console.log("Not set");
  }
}

find(12, 2);
find(121, 2);
