var courseApi = 'http://localhost:3000/course';

function start() {
    getCourses(renderCourses);

    handleCreateForm();
}

start();


// Functions
function getCourses(callback) {
    fetch(courseApi) 
        .then(function(response) {
            return response.json();
        })
        .then(callback);
}

function renderCourses(courses) {
    var listCorsesBlock = 
        document.querySelector('#list-courses');
    var htmls = courses.map(function(course) {
        return `
            <li>
                <h4>${course.name}</h4>
                <p>${course.description}</p>
            </li>
        `
    });
    listCorsesBlock.innerHTML = htmls.join("")
}

function handleCreateForm() {
    var createBtn = document.querySelector('#create');

    createBtn.onclick = function() {
        alert();
    }
}