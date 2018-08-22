function calcDistance2(n) {
  let distance = 0;

  for (let counter = 1; counter <= n; counter++) {
    distance += counter;
  }

  return distance * 2;
}

// console.log(calcDistance(5));

module.exports.calcDistance2 = calcDistance2;
