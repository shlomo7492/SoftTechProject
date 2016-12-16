<div class="formFrame">

    <?php

    $name = $_POST["fullName"];
    $user_Pass  = base64_encode($_POST["password"]);
    $email = $_POST["email"];
    $gender = $_POST["gender"];
    $birthdate = trim($_POST['birthday']);
    // date('Y-m-d',strtotime());
    $date_Registered = date('Y-m-d H:i:s');
    $accountType = "user";


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
        $_SESSION["message"] = "New user ".$name." was successfully registered.";
    }
    else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();


    ?>

</div>