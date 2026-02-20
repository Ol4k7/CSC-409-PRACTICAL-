class Exam:
    def __init__(self, mark):
        self.mark = mark

    def get_status(self):
        # Mark > 40 is a pass
        return "PASS" if self.mark > 40 else "FAIL"

# Usage
score = float(input("Enter student mark: "))
student_exam = Exam(score)
print(f"Result: {student_exam.get_status()}")