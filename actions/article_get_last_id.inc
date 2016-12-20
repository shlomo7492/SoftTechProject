<?php
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$author = $_SESSION['userID'];
$sql = $sql = "SELECT * FROM `$dbname`.`Articles` WHERE `user_id`='$author'";

$result = $conn->query($sql);
$article_id = 0;
if ($result->num_rows > 0) {
// output data of each row


    while($row = $result->fetch_assoc()) {
        if($article_id<=$row['article_id']){
            $article_id = $row['article_id'];
        }

    }
} else {
    echo "Error";
}
$conn->close();

//echo $_POST['login']."login"."</br>";
//echo $_SESSION['logged']."</br>";
//echo $_SESSION['userID'];
?>