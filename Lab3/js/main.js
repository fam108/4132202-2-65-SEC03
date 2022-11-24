//alert("Hello js!");
var num = 10;
let name = "fam"; //scope
const arr = [10, 20, "Hi"];
let obj = { name: "Dang", age: 20 };
const objimx = {
    data: [
        { name: "dang", age: 20 },
        { name: "dum", age: 18, gpa: 3.12 },
    ]
};
console.log(num);
console.log(arr[2]);
console.log(objimx.data[1].age);

function add(a, b) {
    return a + b;
}

let total = add(3, 5);
document.getElementById("div1").innerHTML = name;

$(function () {
    //alert("Hello jQuery...");

    $("#btn1").click(function () {
        $("#div1").text("bru");
    });
    $("#btn2").bind ("click",() => {
        $(".in1").val("bru");
    });
    $("#btn3").click(() => {
        $(".in1:even").toggleClass("red");
    });

    $("#div_form").load("./pages/form.html");

}); //jQuery Handle