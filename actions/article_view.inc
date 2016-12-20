<?php
$error="";
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
$author = "";
$title = "";
$date = "";
$content = "";




$sql = "SELECT * FROM `$dbname`.`Articles` WHERE `article_id`='$article_id'";

$result = $conn->query($sql);
if ($result->num_rows > 0) {
// output data of each row


    while($row = $result->fetch_assoc()) {
        $user = $row['user_id'];
        $title = $row['title'];
        $date = $row['date_Created'];
        $content = $row['content'];
    }
} else {
    $error =  "Error";
}

$sql = "SELECT * FROM `$dbname`.`Users` WHERE `user_id`='$user'";

$result = $conn->query($sql);

if ($result->num_rows > 0) {
// output data of each row

    while($row = $result->fetch_assoc()) {
        $author = $row['fullName'];
    }
} else {
    $error =  "Error";
}
if ($error == "Error"){
    echo "there is no such article";
}else {
    echo "<h1 style='color:#3355AA;font-weight:bolder;margin-top:100px;'>" . $title . "</h1></br>";
    echo "<div style='font:normal 0.75em Serif;'>Created by <em>" . $author . "</em> on: " . $date . "</div></br>";
    echo "<div>" . $content . "</div></br>";
}
$conn->close();


//echo $_POST['login']."login"."</br>";
//echo $_SESSION['logged']."</br>";
//echo $_SESSION['userID'];
?>