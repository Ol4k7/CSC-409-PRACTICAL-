<?php
class Person {
    public $name, $gender, $country, $phone;

    public function setPersonDetails($n, $g, $c, $p) {
        // Fix: Use $this and remove the $ from the property names
        $this->name = $n; 
        $this->gender = $g;
        $this->country = $c; 
        $this->phone = $p;
    }
}

class Student extends Person {
    public $matricNo, $dept;

    public function setStudentDetails($m, $d) {
        $this->matricNo = $m;
        $this->dept = $d;
    }

    public function display() {
        echo "Name: " . $this->name . "\n";
        echo "Matric No: " . $this->matricNo . "\n";
        echo "Department: " . $this->dept . "\n";
    }
}

// Example usage to test it:
$s = new Student();
$s->setPersonDetails("John Doe", "Male", "Nigeria", "08012345678");
$s->setStudentDetails("ACC/2024/001", "Computer Science");
$s->display();
?>