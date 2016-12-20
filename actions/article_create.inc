<h2> Create Article</h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?article/create" method="post">
        <div><label for="type">Article type:</label>
            <select name="article_type" id="type">
                <option value="sitenews" selected>News</option>
                <option value="blog">Blog</option>
            </select>
            <br><br>
            <label for="titleID">Title</label> <input type="text" name="title" id="titleID" size="50"><br><br>
            <label for="contentID">Content:</label><textarea  name="content" id="contentID">
                Type some text here...
            </textarea><br><br>
        </div>
        <div>
            <input type="hidden" name="create" value="true"><br>
            <input type="reset" value="Reset" class="reset">
            <input type="submit" value="Create" class="submit">
        </div>
    </form>
</div>


