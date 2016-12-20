<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Article :: View </title>
    <style>
        <?php include 'css/styles.css'; ?>Create
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

    include 'actions/article_view.inc';
    if (($_SESSION['logged'] == true) &&(($_SESSION['userID'] == $user)||($_SESSION['account_Type'] =='admin')) && ($error=="")){
        include 'actions/article_buttons.inc';
    }
    ?>

</main>
</body>

</html>