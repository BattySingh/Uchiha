// Program to learn about break and continue
const scores = [20, 30, 10, 25, 5, 50];

for (let i = 0; i < scores.length; i++) {
    // if (scores[i] > 25) break;
    if (scores[i] % 2 == 0) continue;
    else console.log(`Score : ${ scores[i] }`);
}