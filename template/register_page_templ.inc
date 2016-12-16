<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: News :: Register</title>
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
    if ($_POST["register"]==true){
        include 'actions/register_update.inc';
        header("Location: ?login");
        die();
    }
    else {
        include 'actions/register.inc';
    }
    ?>
</main>

</body>

</html>