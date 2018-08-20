use students

var c = db.grades.find({type: 'homework'}).sort({'student_id': 1}, {'score': 1})

for (var i = 0; i < c.length(); i++) {
	if (i % 2 == 0) {
		db.grades.deleteOne({'_id': c[i]._id});
	}
}	

db.grades.aggregate( { '$group' : { '_id' : '$student_id', 'average' : { $avg : '$score' } } }, { '$sort' : { 'average' : -1 } }, { '$limit' : 1 } )

