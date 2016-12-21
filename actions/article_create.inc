<h2> Create Article</h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?article/create" method="post" style="display-inside:;margin-bottom: 10px;">
              <?php if ($_SESSION['account_Type']=='admin'){?><label for="type">Article type:</label>
                    <select name="article_type" id="type">
                        <option value="sitenews" selected>News</option>
                        <option value="blog">Blog</option>
                    </select>
              <?php} else {?>
                  <input type="hidden" name="article_type" value="blog"><br><br>
              <?php } ?>
                <br><br>
                <label for="titleID">Title</label> <input type="text" name="title" id="titleID" style=""><br><br>
                <label for="contentID">Content:</label><textarea  name="content" id="contentID">
                    Type some text here...
                </textarea><br><br>

                <input type="hidden" name="create" value="true"><br><br>
                <input type="reset" value="Reset" class="reset">
                <input type="submit" value="Create" class="submit">
    </form>
</div>


