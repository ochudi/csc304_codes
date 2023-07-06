function outermost() {
  var outerVar = "Outer";

  function middle() {
    var middleVar = "Middle";

    function innermost() {
      var innerVar = "Inner";

      // Access variables from all levels
      console.log("Innermost subprogram:");
      console.log("Inner variable: " + innerVar);
      console.log("Middle variable: " + middleVar);
      console.log("Outer variable: " + outerVar);
    }

    innermost(); // Call innermost subprogram

    // Access variables from outer levels
    console.log("Middle subprogram:");
    console.log("Middle variable: " + middleVar);
    console.log("Outer variable: " + outerVar);
  }

  middle(); // Call middle subprogram

  // Access variable from outer level
  console.log("Outermost subprogram:");
  console.log("Outer variable: " + outerVar);
}

outermost(); // Call outermost subprogram
