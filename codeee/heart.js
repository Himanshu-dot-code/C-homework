const canvas = document.getElementById("heartCanvas");
const ctx = canvas.getContext("2d");

canvas.width = canvas.offsetWidth;
canvas.height = canvas.offsetHeight;

const centerX = canvas.width / 2;
const centerY = canvas.height / 2 - 20;
let angle = 10;
const blooms = [];

function heartPoint(t) {
  const x = 16 * Math.pow(Math.sin(t), 3);
  const y = -(13 * Math.cos(t) - 5 * Math.cos(2*t) - 2 * Math.cos(3*t) - Math.cos(4*t));
  return {
    x: centerX + x * 10,
    y: centerY + y * 10
  };
}

function drawBloom(x, y) {
  ctx.fillStyle = "rgba(168,85,247,0.15)";
  ctx.beginPath();
  ctx.arc(x, y, 6, 0, Math.PI * 2);
  ctx.fill();
}

function animateHeart() {
  ctx.clearRect(0, 0, canvas.width, canvas.height);

  for (let p of blooms) {
    drawBloom(p.x, p.y);
  }

  if (angle < 30) {
    const t = angle / Math.PI;
    blooms.push(heartPoint(t));
    angle += 0.2;
  }

  requestAnimationFrame(animateHeart);
}

animateHeart();
