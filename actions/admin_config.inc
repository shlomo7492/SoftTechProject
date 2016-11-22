<?php

$name = $_POST["fullName"];
$user_Pass  = base64_encode($_POST["password"]);
$email = $_POST["email"];
$gender = $_POST["gender"];
$birthdate = trim($_POST['birthday']);
// date('Y-m-d',strtotime());
$date_Registered = date('Y-m-d H:i:s');
$accountType = "admin";

echo 'name:'.$name."</br>";
echo 'pass:'.$password ."</br>";
echo 'mail:'.$email."</br>";
echo 'sex:'.$gender."\n";
echo 'BDay:'.$birthdate."\n";


// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}
else
{
    echo 'Connection successfull';
}

//Inserts data in to the Database

$sql = "INSERT INTO `myBlogDB`.`Users` (`user_id`, `fullName`, `user_Pass`, `email`, `gender`,`birthdate`, `date_Registered`, `account_Type`) 
VALUES (Null, '$name', '$user_Pass', '$email', '$gender', '$birthdate','$date_Registered', '$accountType')";

if ($conn->query($sql) === TRUE) {
echo "New record created successfully";
}
else {
echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>
<form action="index.php" method="POST">
    <input type="hidden" name="step" value="0">
    <input type="submit" value="Continue to your new Blog website &rarr; ">
</form>