db.zips.aggregate([{$project:{first_char: {$substr : ["$city",0,1]}, pop: 1, state: 1}}, {$match: {$or: [{first_char: {$eq: "B"}}, {first_char: {$eq: "D"}}, {first_char: {$eq: "O"}}, {first_char: {$eq: "G"}}, {first_char: {$eq: "N"}}, {first_char: {$eq: "M"}}]}}, {$group: {_id: 0, total: {$sum: "$pop"}}}])

