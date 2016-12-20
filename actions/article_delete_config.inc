<div class="formFrame">

    <?php

    $title = $_POST["title"];
    $content = $_POST["content"];
    $user_id = $_SESSION["userID"];


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

    $sql = "DELETE  FROM `myBlogDB`.`Articles`  WHERE `article_id`=$article_id";

    if ($conn->query($sql) === TRUE) {
        echo "Article: ".$title." deleted successfully";
    }
    else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    $conn->close();
    ?>

</div>