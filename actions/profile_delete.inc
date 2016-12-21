<h2> Delete profile of <?php echo $_SESSION['userName']?>: </h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?profile/delete" method="post">
        <div><h3>Do you really want to delete your profile? This is not reversible. Please confirm.</h3></div>
        <div>
            <span>Password:</span><input type="password" name="password" ><br><br>

            <input type="hidden" name="config" value="true"><br>
            <input type="submit" value="Delete" class="delete">
            <span class="submit" id="cancel"><a href="?profile/delete">Cancel</a></span>

        </div>
    </form>

</div>