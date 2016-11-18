// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}
// sql to create table Users
$sql = "CREATE TABLE Users (
user_id INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
fullName VARCHAR(20) NOT NULL,
title VARCHAR(255) NOT NULL,
content TEXT NOT NULL,
author_id int(11)
date_Crated TIMESTAMP
FOREIGN KEY (author_id) REFERENCES Users(user_id)
)";

if ($conn->query($sql) === TRUE) {
echo "Table Articles created successfully";
}
else {
echo "Error creating table: " . $conn->error;
}

// sql to create table Articles
$sql = "CREATE TABLE Articles (
article_id INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
type VARCHAR(20) NOT NULL,
title VARCHAR(255) NOT NULL,
content TEXT NOT NULL,
author_id int(11)
date_Crated TIMESTAMP
FOREIGN KEY (author_id) REFERENCES Users(user_id)
)";

if ($conn->query($sql) === TRUE) {
echo "Table Articles created successfully";
} else {
echo "Error creating table: " . $conn->error;
}