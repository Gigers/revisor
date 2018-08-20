use video

db.movieDetails.find({'year': 2013, rated: 'PG-13', "awards.wins": {$eq: 0}}, {'title': 1}).pretty()
