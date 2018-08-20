use students

db.grades.find({type: 'exam', score: {$gte: 65}}).sort({'score': 1})
