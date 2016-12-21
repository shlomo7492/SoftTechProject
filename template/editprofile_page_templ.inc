<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Profile::Edit</title>
    <style>
        <?php include 'css/styles.css'; ?>
    </style>
    <script>
        <?php include 'js/myscript.js'; ?>
    </script>
</head>
<body onresize="onResize()" onpageshow="onResize()" >
<header id="header">
    <?php
    include 'actions/header.inc';
    ?>
</header>
<main id="main">
    <?php

    if ($_POST["edit"]==true) {
        include 'actions/profile_edit.inc';
        $_POST=array();


    }elseif($_POST['config']==true){
        if (base64_encode($_POST['oldpassword']) == $_SESSION['userPass'])
        {
            $userid = $_SESSION['userID'];
            $name = $_POST["fullName"];
            $pass = "";
            if (($_POST['password'] != "") && ($_POST['password']==$_POST['repassword'])){
                $pass = base64_encode ($_POST["password"]);
            }else{
                $pass = $_SESSION['userPass'];
            }
            echo $pass;
            $email = $_POST['email'];
            $gender=$_POST['gender'];
            $birthday = $_POST['birthday'];

            include 'actions/profile_edit_config.inc';
        }
        $_POST=array();

        echo '<script type="text/javascript">window.location = "?profile"</script>';

    }
    else{
        echo '<script type="text/javascript">window.location = "?profile"</script>';
    }


    ?>
</main>
</body>

</html>