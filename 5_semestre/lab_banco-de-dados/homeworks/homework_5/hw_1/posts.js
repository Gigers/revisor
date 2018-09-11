db.posts.aggregate([{$group: {_id: "$comments.author"}}, {$unwind: "$_id"}, {$group: {_id: "$_id", comments: {$sum: 1}}}, {$sort: {comments: -1}}]);
