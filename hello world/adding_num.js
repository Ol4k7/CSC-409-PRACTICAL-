const readline = require('node:readline/promises');
const { stdin: input, stdout: output } = require('node:process');

async function getSum() {
    const rl = readline.createInterface({ input, output });
    let total = 0;

    console.log("Enter 5 numbers to get their sum:");

    for (let i = 1; i <= 5; i++) {
        const answer = await rl.question(`Number ${i}: `);
        const num = parseFloat(answer);

        if (!isNaN(num)) {
            total += num;
        } else {
            console.log("That's not a valid number. Try again.");
            i--; // Repeat this iteration
        }
    }

    console.log(`--- \nTotal Sum: ${total}`);
    rl.close();
}

getSum();