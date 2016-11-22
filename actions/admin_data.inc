<?php
echo '<h2> Your blog first Admin!';
echo '<h1> Installing your blog</h1>';
echo '<h3>Please provide your Data Base information</h3>';


echo '
<form action="index.php" method="post">
    Full Name: <input type="text" name="fullName"><br>
    Password: <input type="password" name="password"><br>
    E-mail: <input type="text" name="email"><br>
    Gender: <input type="radio" name="gender" value="male" checked> Male &nbsp;
    <input type="radio" name="gender" value="female" > Female <br>
    Birth date(YYYY-MM-DD): <input type="date" name="birthday" ><br> 
    <input type="hidden" name="step" value="4">
    <input type="submit" value="Continue to step four &rarr; ">
</form>
';
?>


