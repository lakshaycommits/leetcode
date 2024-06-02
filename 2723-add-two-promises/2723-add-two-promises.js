/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {
    let sum = 0;
    await promise1.then((value) => sum += value);
    await promise2.then((value) => sum += value);
    return new Promise((resolve, reject) => resolve(sum));
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */