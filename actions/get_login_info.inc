<?php
if ($_POST['login']==true)
{
    $conn = new mysqli($servername, $username, $password, $dbname);
    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    $email = $_POST['email'];
    $pass = base64_encode($_POST['password']);
    $sql = $sql = "SELECT * FROM `$dbname`.`Users` WHERE `user_Pass`='$pass' AND `email`='$email'";

    $result = $conn->query($sql);

    if ($result->num_rows > 0) {
        // output data of each row
        while($row = $result->fetch_assoc()) {
            echo "id: " . $row["user_id"]."name:".$row["fullName"]."<br>";

        }
    } else {
        echo "0 results";
    }
    $conn->close();

}

?>>