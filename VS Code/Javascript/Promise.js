var users = [
    {
        id: 1,
        name: 'hyzuu'
    },
    {
        id: 2,
        name: 'suy'
    },

]

var comments = [
    {
        id: 1,
        user_id: 1,
        content: 'Hyzuu dep trai'
    },
    {
        id: 2,
        user_id: 2,
        content: 'Nho ban iu'
    }
]

function getComments() {
    return new Promise(function(resole) {
        setTimeout(function() {
            resole(comments);
        }, 1000);
    });
}

function getUsersByIds(userIds) {
    return new Promise(function(resolve) {
        var result = users.filter(function(user) {
            return userIds.includes(user.id);
        })
        resolve(result);
    })
}

getComments()
    .then(function(comments) {
        var userIds = comments.map(function(comment) {
            return comment.user_id;
        });
        return getUsersByIds(userIds) 
            .then(function(users) {
                return {
                    users: users,
                    comments: comments
                }
            });
    })
    .then(function(data) {
        var commentBlock = document.getElementById('comment_block')
        var html = '';
        data.comments.forEach(function(comment) {
            var user = data.users.find(function(user) {
                return user.id === comment.user_id;
            });
            html += `<li>${user.name}: ${comment.content}</li>`;
        });

        commentBlock.innerHTML = html;
    })



