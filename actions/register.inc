<h2> Register </h2>
<div class="formFrame">
    <h3>Please enter your information in the form fields below.</h3>

    <!--Form to get all admin user data-->

    <form action="?register" method="post">

                <span>Full Name:</span> <input type="text" name="fullName" ><br><br>
                <span>Password:</span><input type="password" name="password" ><br><br>
                <span> E-mail:</span> <input type="text" name="email" ><br><br>
                <span id="gender">Gender:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span> <span style="display:inline;float:right;"> Male <input type="radio" name="gender" value="male" style="margin-top:-15px;" checked >&nbsp;</span>
                <span style="display:inline;float:right;">Female <input type="radio" name="gender" value="female" style="margin-top:-15px;" > </span><br><br>
                <span>Birth date(YYYY-MM-DD):</span><input type="text" name="birthday" ><br><br>
                <input type="hidden" name="register" value="true"><br>


                <input type="reset" value="Reset" class="reset">
                <input type="submit" value="Register &#9658;" class="submit">

    </form>
</div>


