<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Logout</title>
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
    echo $_SESSION['logged'];
    if ($_SESSION['logged']== true) {
        session_unset();
        echo '<script type="text/javascript">
                 window.location = "/SoftTechProject"
              </script>';
    }
    else{
        echo '<script type="text/javascript">
                 window.location = "/SoftTechProject"
              </script>';    }
    ?>
</main>
<!--content here -->

</body>

</html>