<h2> Register </h2>
<div class="formFrame">
    <h3>Please enter your information in the form fields below.</h3>

    <!--Form to get all admin user data-->

    <form action="?register" method="post">
        <span>Full Name:</span> <input type="text" name="fullName" size="50"><br><br>
        <span>Password:</span><input type="password" name="password" size="50"><br><br>
        <span> E-mail:</span> <input type="text" name="email" size="50"><br><br>
        <span>Gender:</span> <span><input type="radio" name="gender" value="male" checked> Male</span> &nbsp;
        <span><input type="radio" name="gender" value="female" > Female</span> <br><br>
        <span>Birth date(YYYY-MM-DD):</span> <input type="text" name="birthday" size="50"><br><br>
        <input type="hidden" name="register" value="true"><br>
        <input type="submit" value="Register &#9658;" class="submit">
    </form>
</div>


