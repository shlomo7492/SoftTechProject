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
        <div>
            <h2> Login</h2>
        </div>

        <?php
            include 'actions/login.inc';
        ?>
    </main>
    <!--content here -->

</body>

</html>