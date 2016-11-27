<?php
 if ($_POST['login']==true)
 {
// Create connection
     $conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
     if ($conn->connect_error) {
         die("Connection failed: " . $conn->connect_error);
     }

     $email = $_POST['email'];
     $pass = $_POST['password'];

     $sql = "SELECT `user_id` FROM `$dbname`.`Users` WHERE `user_Pass`='$pass' AND `email`='$email'";

 }

?>