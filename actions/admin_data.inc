<h2> Your blog first Admin!</h2>
<div class="formFrame">
    <h3>Please enter admin information.</h3>

    <!--Form to get all admin user data-->

    <form action="index.php" method="post">
        <span>Full Name:</span> <input type="text" name="fullName" size="50"><br><br>
        <span>Password:</span><input type="password" name="password" size="50"><br><br>
        <span> E-mail:</span> <input type="text" name="email" size="50"><br><br>
        <span>Gender:</span> <span><input type="radio" name="gender" value="male" checked> Male</span> &nbsp;
        <span><input type="radio" name="gender" value="female" > Female</span> <br><br>
        <span>Birth date(YYYY-MM-DD):</span> <input type="text" name="birthday" size="50"><br><br>
        <input type="hidden" name="step" value="4"><br>
        <input type="submit" value="Continue to step four &#9658;" class="submit">
    </form>
</div>


