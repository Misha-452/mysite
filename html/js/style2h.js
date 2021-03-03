document.querySelector(".btn") .addEventListener("click", change);
 const lights = document.querySelectorAll('body');
 counter = -1;

 function change(){
     const colors = ["royalblue", "cyan", "deepskyblue"];
     const lightsLen = colors.length;
     counter = (counter+1) % lightsLen;
     document.body.style.backgroundColor = colors[counter];
}