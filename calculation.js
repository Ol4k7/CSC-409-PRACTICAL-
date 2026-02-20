class SolarCalculator {
    constructor(dayNumber) {
        this.n = dayNumber;
    }

    calculateE() {
        // b = 2π(n - 81) / 365
        const b = (2 * Math.PI * (this.n - 81)) / 365;
        
        // e = 9.87sin(2b) - 7.53cos(b) - 1.5sin(b)
        const e = (9.87 * Math.sin(2 * b)) - (7.53 * Math.cos(b)) - (1.5 * Math.sin(b));
        
        return e;
    }
}

// Usage
const today = new SolarCalculator(100); // For day 100
console.log(`Equation of Time (e): ${today.calculateE().toFixed(2)} minutes`);