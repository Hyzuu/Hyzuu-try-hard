var courseApi = 'http://localhost:3000/courses';

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

function createCourse(data, callback) {
    var options = {
        method: "POST",
        headers: {
            "Content-Type": "application/json",
        },
        body: JSON.stringify(data)
    };
    fetch(courseApi, options)
        .then(function(response) {
            return response.json();
        })
        .then(callback);
}

function handleCreateForm() {
    var createBtn = document.querySelector('#create');

    createBtn.onclick = function() {
        var name = document.querySelector('input[name = "name"]').value;
        var description = document.querySelector('input[name = "description"]').value;
        console.log(description);

        var formData = {
            name: name,
            description: description
        };

        createCourse(formData, function() {
            getCourses(renderCourses);
        });
        
    }
}

function handleDeleteCourse(id) {
    var options = {
        method: "DELETE",
        headers: {
            "Content-Type": "application/json",
        },
    };
    fetch(courseApi + "/" + id, options)
        .then(function(response) {
            return response.json();
        })
        .then(function() {
            var courseItem = document.querySelector('.course-item-' + id); 
            if (courseItem) {
                courseItem.remove();
            }
        });
}


function renderCourses(courses) {
    var listCorsesBlock = 
        document.querySelector('#list-courses');
    var htmls = courses.map(function(course) {
        return `
            <li class="course-item-${course.id}">
                <h4>${course.name}</h4>
                <p>${course.description}</p>
                <button onclick="handleDeleteCourse(${course.id})">Delete</button>
            </li>
        `
    });
    listCorsesBlock.innerHTML = htmls.join("")
}

