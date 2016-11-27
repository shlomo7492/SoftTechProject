<div class="formFrame">
<?php

//Installing the DataBase
// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}else{
    echo "Connection to DataBase server: Established!";
}
// sql to create table Users
$sql = "CREATE TABLE Users (
user_id INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
fullName VARCHAR(20) NOT NULL,
user_Pass VARCHAR(255) NOT NULL,
email VARCHAR(255) NOT NULL,
gender VARCHAR(20) NOT NULL,
birthdate DATE NOT NULL,
date_Registered TIMESTAMP,
account_Type VARCHAR(20) NOT NULL
)";

if ($conn->query($sql) === TRUE) {
echo "Table Users created successfully"."\n";
}
else {
echo "Error creating table Users: " . $conn->error;
}

// sql to create table Articles
$sql = "CREATE TABLE Articles (
article_id INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
type VARCHAR(20) NOT NULL,
title VARCHAR(255) NOT NULL,
content TEXT NOT NULL,
user_id int(11) UNSIGNED NOT NULL,
date_Created TIMESTAMP,
FOREIGN KEY (user_id) REFERENCES Users(user_id)
)";


if ($conn->query($sql) === TRUE) {
echo "Table Articles created successfully"."\n";
} else {
echo "Error creating table Articles: " . $conn->error;
}

// sql to create table Comments
$sql = "CREATE TABLE Comments (
comment_id INT(11) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
user_id INT(11) UNSIGNED NOT NULL,
article_id INT(11) UNSIGNED NOT NULL,
comment_Content TEXT NOT NULL,
date_Created TIMESTAMP,
FOREIGN KEY (user_id) REFERENCES Users(user_id),
FOREIGN KEY (article_id) REFERENCES Articles(article_id)
)";

if ($conn->query($sql) === TRUE) {
echo "Table Comments created successfully"."\n";
} else {
echo "Error creating table Comments: " . $conn->error;
}

$conn->close();
?>

<form action="index.php" method="POST">
    <input type="hidden" name="step" value="3">
    <input type="submit" value="Continue to step three &#9658;" class="submit">
</form>
</div>