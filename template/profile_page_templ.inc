<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Profile</title>
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
        include 'actions/get_login_info.inc';
        include 'actions/header.inc';
    ?>
</header>
<main id="main">

    <?php
        include 'actions/print_profile.inc';
    ?>
</main>

</body>

</html>