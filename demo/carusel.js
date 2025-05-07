const wrapper = document.getElementById('carouselWrapper');
const prevBtn = document.getElementById('prevBtn');
const nextBtn = document.getElementById('nextBtn');
const slideWidth = 200;
const slideMargin = 20;
const totalSlides = 3;
const visibleSlides = 2;

let currentIndex = 0;

function updateSlidePosition() {
    const offset = currentIndex * (slideWidth + slideMargin);
    wrapper.style.transform = `translateX(-${offset}px)`;
}

prevBtn.addEventListener('click', () => {
    if (currentIndex > 0) {
        currentIndex--;
        updateSlidePosition();
    }
});

nextBtn.addEventListener('click', () => {
    if (currentIndex < totalSlides - visibleSlides) {
        currentIndex++;
        updateSlidePosition();
    }
});