class EvenAnalyzer:
    def __init__(self, limit):
        self.limit = limit
        self.even_numbers = []

    def process_numbers(self):
        # Generate even numbers from 0 to the limit (inclusive)
        self.even_numbers = [i for i in range(0, self.limit + 1, 2)]
        
        # Calculate stats
        total_count = len(self.even_numbers)
        if total_count > 0:
            average = sum(self.even_numbers) / total_count
        else:
            average = 0
            
        return self.even_numbers, total_count, average

# --- Execution ---
try:
    user_limit = int(input("Enter the upper limit (e.g., 1000): "))
    
    # Initialize the object
    analyzer = EvenAnalyzer(user_limit)
    
    # Get results from the object methods
    evens, count, avg = analyzer.process_numbers()
    
    print(f"\n--- Results for limit {user_limit} ---")
    print(f"Total even numbers: {evens}")
    print(f"Total even numbers generated: {count}")
    print(f"Average of the even numbers: {avg}")

    
except ValueError:
    print("Invalid input! Please enter a whole number.")