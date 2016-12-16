<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Login</title>
    <style>
        <?php include 'css/styles.css'; ?>
    </style>
    <script>
        <?php include 'js/myscript.js'; ?>
    </script>
</head>

<body onresize="onResize()" onload="onResize()" >
    <header id="header">
        <?php
        include 'actions/header.inc';
        ?>
    </header>
    <main id="main">
        <?php
            if ($_SESSION["message"] !="") {
                echo $_SESSION["message"]."</br></br>";
                $_SESSION["message"] = "";
            }

            if ($_SESSION['logged'] == true) {
                echo '<script type="text/javascript">
                         window.location = "?profile"
                        </script>';
                echo "You are already logged in and we will be redirect you to your profile page in a moment. If redirection fails click the following link: <a href='?profile'>Redirect me now </a>";

            }

        if ($_SESSION['logged'] == false) {

            echo "<div><h2> Login</h2> </div>";

            include 'actions/login.inc';
        }
        ?>
    </main>
    <!--content here -->

</body>

</html>