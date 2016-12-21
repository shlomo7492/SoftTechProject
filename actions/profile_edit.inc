<h2> Edit Profile: </h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?profile/edit" method="post">
            <span>Full Name:</span> <input type="text" name="fullName" value="<?php echo $_SESSION['userName']; ?>"><br><br>
            <span>New Password:</span><input type="password" name="password" ><br><br>
            <span>Redo Password:</span><input type="password" name="repassword" ><br><br><br><br><br>
            <span> E-mail:</span> <input type="text" name="email" value="<?php echo $_SESSION['email']; ?>"><br><br>
            <span id="gender">Gender:</span> <span style="display:inline;float:right;"> Male <input type="radio" name="gender" value="male" style="margin-top:-15px;" >&nbsp;</span>
            <span style="display:inline;float:right;">Female <input type="radio" name="gender" value="female" style="margin-top:-15px;" > </span><br><br>
            <span>Birth date(YYYY-MM-DD):</span><input type="text" name="birthday" value="<?php echo $_SESSION['birthdate']; ?>"><br><br>
            <h3>Please provide your current password before changes take effect!</h3>
            <span>Old Password:</span><input type="password" name="oldpassword" ><br><br>

                <input type="hidden" name="config" value="true"><br>
                <input type="reset" value="Reset" class="reset">
                <input type="submit" value="Edit" class="edit">
    </form>
</div>