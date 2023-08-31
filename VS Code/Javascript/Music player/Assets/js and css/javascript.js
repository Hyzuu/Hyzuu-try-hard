/* 
    1. Render songs
    2. Scroll top
    3. Play / pause / seek
    4. CD rotate
    5. Next / prev
    6. Random
    7. Nex / repeat when ended
    8. Active song
    9. Scroll activve song
    10. play song when click
 */

const $ = document.querySelector.bind(document);
const $$ = document.querySelectorAll.bind(document);

const heading = $('header h2');
const cdThumb = $('.cd-thumb');
const audio = $('#audio');
const cd = $('.cd');
const playButton = $('.btn-toggle-play')
const player = $('.player');
const progress = $('#progress');
const nextBtn = $('.btn-next');
const prevBtn = $('.btn-prev');
const randomBtn = $('.btn-random');
const repeatBtn = $('.btn-repeat');

const app = {
    currentIndex: 0,
    isPlaying: false,
    isRandom: false,
    isRepeat: false,
    songs: [
    {
        name: 'Wn id 072019 3107 ft 267',
        singer: 'W/n, 267',
        path: './Assets/Songs/Wn  id 072019  3107 ft 267.mp3',
        img: './Assets/Img/Wn  id 072019  3107 ft 267.jpg'
    },
    {
        name: 'Anh đã từ bỏ rồi đấy',
        singer: 'Nguyenn x Aric x Freak D',
        path: './Assets/Songs/Anh đã từ bỏ rồi đấy.mp3',
        img: './Assets/Img/Anh đã từ bỏ rồi đấy.jpg'
    },
    {
        name: 'Tệ Thật, Anh Nhớ Em - Orange live',
        singer: 'Orange',
        path: './Assets/Songs/Tệ Thật, Anh Nhớ Em - Orange live.mp4',
        img: './Assets/Img/Tệ Thật, Anh Nhớ Em - Orange live.jpg'
    },
    {
        name: 'Là Ai Mang Nắng Đi Xa',
        singer: 'Yang',
        path: './Assets/Songs/Là Ai Mang Nắng Đi Xa.mp3',
        img: './Assets/Img/Là Ai Mang Nắng Đi Xa.jpg'
    },
    {
        name: 'Dành Cho Em - Live',
        singer: 'orange x Hoàng Dũng',
        path: './Assets/Songs/Dành Cho Em - Live.mp3',
        img: './Assets/Img/Dành Cho Em - Live.jpg'
    },
    {
        name: 'Anh Nhớ Ra',
        singer: 'Vu',
        path: './Assets/Songs/Anh Nhớ Ra.mp3',
        img: './Assets/Img/Anh Nhớ Ra.jpg'
    },
    {
        name: 'Thịnh Vượng Việt Nam sáng ngời',
        singer: 'Bui Truong Linh',
        path: './Assets/Songs/Thịnh Vượng Việt Nam sáng ngời.mp3',
        img: './Assets/Img/Thịnh Vượng Việt Nam sáng ngời.png'
    },
    ],
    render: function() {
        const htmls = this.songs.map((song, index) => {
            return `
            <div class="song ${index === this.currentIndex ? 'active' : ''}">
                <div class="thumb"
                    style="background-image: url('${song.img}')">
                </div>
                <div class="body">
                    <h3 class="title">${song.name}</h3>
                    <p class="author">${song.singer}</p>
                </div>
                <div class="option">
                    <i class="fas fa-ellipsis-h"></i>
                </div>
            </div>
            `
        })
        $('.playlist').innerHTML = htmls.join('');
    },

    defineProperties: function() {
        Object.defineProperty(this, 'currentSong', {
            get: function() {
                return this.songs[this.currentIndex];
            }
        })
    },

    handleEvens: function() {
        const cdWidth = cd.offsetWidth

        document.onscroll = function() {
            const scrollTop = window.scrollY || document.documentElement.scrollTop;
            const newCdWidth = cdWidth - scrollTop;
            cd.style.width = newCdWidth > 0 ? newCdWidth + 'px' : 0;
            cd.style.opacity = newCdWidth / cdWidth;
        } 

        // Xử lí khi CD quay / dừng
        const cdThumpAnimate = cdThumb.animate([
            {transform: 'rotate(360deg'}
        ], {
            duration: 10000,
            iterations: Infinity
        })
        cdThumpAnimate.pause();

        // Xử lí khi click play
        playButton.onclick = function() {

            if (app.isPlaying) {
                audio.pause();
            }
            else {
                audio.play();
            }
        }
            // Khi song được play
            audio.onplay = function() {
                app.isPlaying = true;
                player.classList.add('playing');
                cdThumpAnimate.play();
            }

            // Khi song bị pause
            audio.onpause = function() {
                app.isPlaying = false;
                player.classList.remove('playing');
                cdThumpAnimate.pause();
            }

            // Khi tiến độ bài hát thay đổi
            audio.ontimeupdate = function() {
                if(audio.duration) {
                    const progressPercent = Math.floor(audio.currentTime / audio.duration * 100);
                    progress.value = progressPercent;
                }
            }

            // Xử lí khi tua song
            progress.onchange = function(e) {
                const seekTime = audio.duration / 100 * e.target.value;
                audio.currentTime = seekTime;
            }

            // Khi next song
            nextBtn.onclick = function() {
                if (app.isRandom) {
                    app.playRandomSong();
                }
                else {
                    app.nextSong();
                }
                audio.play();
                app.render();
            }
            // Khi prev song
            prevBtn.onclick = function() {
                if (app.isRandom) {
                    app.playRandomSong();
                }
                else {
                    app.prevSong();
                }
                audio.play();
                app.render();
            }

            // Xử lí bật / tắt random song
            randomBtn.onclick = function() {
                app.isRandom =!app.isRandom;
                randomBtn.classList.toggle('active', app.isRandom);
            }

            // Xử lí khi repeat
            repeatBtn.onclick = function(e) {
                app.isRepeat = !app.isRepeat;
                repeatBtn.classList.toggle('active', app.isRepeat);
            }

            // Xử lí khi next song khi audio end
            audio.onended = function() {
                if (app.isRepeat) {
                    audio.play() 
                }
                else nextBtn.click();
            }

    },

    loadCurrentSong: function() {
        const heading = $('header h2');
        const cdThumb = $('.cd-thumb');
        const audio = $('#audio');

        heading.textContent = this.currentSong.name;
        cdThumb.style.backgroundImage = `url('${this.currentSong.img}')`;
        audio.src = this.currentSong.path;
    },

    nextSong: function() {
        this.currentIndex++;
        if (this.currentIndex >= this.songs.length) {
            this.currentIndex = 0;
        }
        this.loadCurrentSong();
    },
    prevSong: function() {
        this.currentIndex--;
        if (this.currentIndex < 0) {
            this.currentIndex = this.songs.length - 1;
        }
        this.loadCurrentSong();
    },

    playRandomSong: function() {
        let newIndex;
        do {
            newIndex = Math.floor(Math.random() * this.songs.length)
        } while (newIndex === this.currentIndex)

        this.currentIndex = newIndex;
        this.loadCurrentSong();
    },

    start: function() {
        // Định nghĩa các thuộc tính cho Object
        this.defineProperties();

        // Lắng nghe / xử lí các sự kiện (DOM events);
        this.handleEvens();

        // Tải thông tin bài hát đầu tiên vào UI
        this.loadCurrentSong();

        // Render playlist
        this.render();
    },
}
app.start()

