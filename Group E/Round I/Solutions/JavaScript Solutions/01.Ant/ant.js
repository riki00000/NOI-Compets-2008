function calcDistance (n) {
  let distance = 0;

  for (let counter = 1; counter <= n; counter++) {
    distance += (counter * 2);
  }

  return distance;
}

// console.log(calcDistance(5));

module.exports.calcDistance = calcDistance;
