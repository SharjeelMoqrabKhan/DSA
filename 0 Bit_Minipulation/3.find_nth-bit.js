function find(num, i) {
  let bitStatus = num & (1 << (i - 1));
  if (bitStatus) {
    console.log("set");
  } else {
    console.log("Not set");
  }
}

find(14, 4);
find(14, 1);