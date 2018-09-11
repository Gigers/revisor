db.grades.aggregate([{$unwind: "$scores"}, {$match: {"scores.type": {$ne: "quiz"}}}, {$group: {_id: "$class_id", media: {$avg: "$scores.score"}}}]);
