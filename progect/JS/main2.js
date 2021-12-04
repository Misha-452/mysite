function check() {

    var question1 = document.quiz.question1.value;
    var question2 = document.quiz.question2.value;
    var question3 = document.quiz.question3.value;
    var question4 = document.quiz.question4.value;
    var question5 = document.quiz.question5.value;
    var question6 = document.quiz.question6.value;
    var correct = 0;


    if (question1 == "DeathAdder") {
        correct++;
    }
    if (question2 == "В 2010 ") {
        correct++;
    }
    if (question3 == "В 2010") {
        correct++;
    }
    if (question4 == "В 2015") {
        correct++;
    }
    if (question5 == " Labtec") {
        correct++;
    }
    if (question6 == "Наушники") {
        correct++;
    }

    var messages = ["Great job!", "That's just okay", "You really need to do better"];
    var score;

    if (correct == 0) {
        score = 2;
    }

    if (correct > 0 && correct < 6) {
        score = 1;


    }

    if (correct == 6) {
        score = 0;
    }

    document.getElementById("after_submit").style.visibility = "visible";
    document.getElementById("message").innerHTML = messages[score];
    document.getElementById("number_correct").innerHTML = "You got " + correct + " correct.";
}