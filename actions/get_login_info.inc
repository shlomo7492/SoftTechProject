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
            $_SESSION['logged'] = true;
            $_SESSION['userID'] = $row["user_id"];
            $_SESSION['userName'] = $row["fullName"];
            $_SESSION['email'] = $row["email"];
            $_SESSION['gender'] = $row["gender"];
            $_SESSION['birthdate'] = $row["birthdate"];
            $_SESSION['date_Registered'] = $row["date_Registered"];
            $_SESSION['account_Type'] = $row["account_Type"];

        }
    } else {
        //echo "There is no user with e-mail:".$email." on this website.";
        //echo "<a href='Login'>Please try to Login again!</a>";
    }

    $conn->close();

}
//echo $_POST['login']."login"."</br>";
//echo $_SESSION['logged']."</br>";
//echo $_SESSION['userID'];
?>