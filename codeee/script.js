// CHANGE THIS DATE
const bondStart = new Date("2024-02-10T19:00:00");

function updateCounter() {
  const now = new Date();
  let diff = Math.floor((now - bondStart) / 1000);

  const days = Math.floor(diff / (3600 * 24));
  diff %= 3600 * 24;

  const hours = Math.floor(diff / 3600);
  diff %= 3600;

  const minutes = Math.floor(diff / 60);
  const seconds = diff % 60;

  document.getElementById("days").textContent = days;
  document.getElementById("hours").textContent = String(hours).padStart(2, "0");
  document.getElementById("minutes").textContent = String(minutes).padStart(2, "0");
  document.getElementById("seconds").textContent = String(seconds).padStart(2, "0");
}

setInterval(updateCounter, 1000);
updateCounter();

document.getElementById("surpriseBtn").onclick = () => {
  document.getElementById("surprise").classList.toggle("hidden");
};
