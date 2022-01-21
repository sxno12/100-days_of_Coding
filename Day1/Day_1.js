function setup() {
  createCanvas(700, 400);
}

function draw() {
  background(133, 102, 121);
  
  fill(255, 255, 255);
  ellipse(width/2, height/2 , 20, 20);
  
  rectMode(CENTER);
  fill(202, 197, 224);
  rect(25, 200, 50, height, 5);
  rect(675, 200, 50, height, 5);
  
  fill(121, 243, 247);
  rect(80, height/2, 30, height/4, 5);
  rect(620, height/2, 30, height/4, 5);
  
  fill(212, 212, 212);
  textSize(32);
  textAlign(CENTER, CENTER);
  text('Score', width/2, 30);
  text('0', width/4, 30);
  text('0', 525, 30);

}
