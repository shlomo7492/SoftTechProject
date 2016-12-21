<h2> Edit Profile: </h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?profile/edit/<?php echo $userID; ?>" method="post">
        <span>Full Name:</span> <input type="text" name="fullName" value="<?php echo $userName; ?>"><br><br>
        <span>New Password:</span><input type="password" name="password" ><br><br>
        <span> E-mail:</span> <input type="text" name="email" value="<?php echo $_SESSION['email']; ?>"><br><br>
        <label for="type">Account type:</label>
        <select name="account_type" id="type">
            <option value="admin" >admin</option>
            <option value="editor">editor</option>
            <option value="user" selected>user</option>
        </select>
        <br><br>        <span id="gender">Gender:</span> <span style="display:inline;float:right;"> Male <input type="radio" name="gender" value="male" style="margin-top:-15px;" >&nbsp;</span>
        <span style="display:inline;float:right;">Female <input type="radio" name="gender" value="female" style="margin-top:-15px;" > </span><br><br>
        <span>Birth date(YYYY-MM-DD):</span><input type="text" name="birthday" value="<?php echo $birthdate; ?>"><br><br>

        <input type="hidden" name="config" value="true"><br>
        <input type="reset" value="Reset" class="reset">
        <input type="submit" value="Edit" class="edit">
    </form>
</div>