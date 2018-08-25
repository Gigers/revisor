use school

var students = db.students.find();

for (var i = 0; i < students.length(); i++) {
	
	var a = students[i];
	var to_remove = 0;

	if (a.scores[2].score > a.scores[3].score) {
		to_remove = 3;
	} else {
		to_remove = 2;
	}

	db.students.update({_id: a._id}, {$pull: {scores: {score: a.scores[to_remove].score } } } )
}

