<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Home</title>
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
    I AM HERE!!!
    <?php
    echo $length.$urlArray[1]." : ".$urlArray[3];

    ?>
<!--content here -->
</main>
</body>

</html>