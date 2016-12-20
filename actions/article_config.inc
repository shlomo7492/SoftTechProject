<div class="formFrame">

    <?php

    $type = $_POST["article_type"];
    $title = $_POST["title"];
    $content = $_POST["content"];
    $user_id = $_SESSION["userID"];
    // date('Y-m-d',strtotime());
    $date_Created = date('Y-m-d H:i:s');

    // Create connection
    $conn = new mysqli($servername, $username, $password, $dbname);
    // Check connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }
    else
    {
       // echo 'Connection successfull';
    }

    //Inserts data in to the Database

    $sql = "INSERT INTO `myBlogDB`.`Articles` (`article_id`, `type`, `title`, `content`,`user_id`, `date_Created`) 
VALUES (Null, '$type', '$title', '$content', '$user_id', '$date_Created')";

    if ($conn->query($sql) === TRUE) {
        echo "New Article: ".$title." created successfully";
    }
    else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
    ?>

</div>