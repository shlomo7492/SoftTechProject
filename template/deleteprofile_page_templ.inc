<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Profile::Delete</title>
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
    if ($_SESSION['userID']!=1) {
        if ($_POST["delete"] == true) {
            include 'actions/profile_delete.inc';
            $_POST = array();


        } elseif ($_POST['config'] == true) {
            if (base64_encode($_POST['password']) == $_SESSION['userPass']) {
                $userid = $_SESSION['userID'];

                include 'actions/profile_delete_config.inc';
            }
            $_POST = array();

            echo '<script type="text/javascript">window.location = "?logout"</script>';

        } else {
            echo '<script type="text/javascript">window.location = "?profile"</script>';
        }
    }
    else{
        echo "<h2>You are the Super User of this website. Your account can not be deleted!</h2>";
    }


    ?>
</main>
</body>

</html>