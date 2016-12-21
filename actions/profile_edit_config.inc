<div class="formFrame">

    <?php



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

    $sql = "UPDATE `$dbname`.`Users` SET `fullName`='$name', `user_Pass`='$pass', `email`='$email', `gender`='$gender', `birthdate`='$birthday'  WHERE `user_id`=$userid";

    if ($conn->query($sql) === TRUE) {
        echo "User with ID: ".$userid." edited successfully";
    }
    else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
    ?>

</div>