'Sam Noggle
'Period 6
'5/31/2018
'This is my own work SJN
'A fake virus that wants to play a game

Public Class Form1
    Dim SAPI
    Dim timerCount As Integer = 100
    Dim fileCount As Integer = 0
    Dim strawCount As Integer = 0

    Private Sub PictureBox1_Click(sender As Object, e As EventArgs) Handles PictureBox1.Click

        SAPI = CreateObject("SAPI.spvoice")
        SAPI.Speak("Where are you going?")

        MsgBox("You cannot leave.")
        MsgBox("You want to keep your files, right?")
        MsgBox("Good. Then stay.")

    End Sub

    'AFTER THE 1ST BUTTON IS CLICKED
    Private Sub btn1_Click(sender As Object, e As EventArgs) Handles btn1.Click
        screentxt1.Visible = False
        screentxt2.Visible = False
        screentxt3.Visible = False
        screentxt4.Visible = False
        btn1.Visible = False
        lblTimer.Visible = False
        lblTimer2.Visible = True
        screen2txt1.Visible = True
        screen2txt2.Visible = True
        screen2txt3.Visible = True
        problem1.Visible = True
        answer1.Visible = True
        answer2.Visible = True
        answer3.Visible = True
        screen2txt4.Visible = True
        filenum.Visible = True


    End Sub

    'INITIAL FORM (ALL THE CRAP IS HIDDEN BASICALLY)
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Timer1.Enabled = True
        Timer2.Enabled = True
        Timer3.Enabled = True
        Blanket.Visible = False
        lblTimer2.Visible = False
        screen2txt1.Visible = False
        screen2txt2.Visible = False
        screen2txt3.Visible = False
        problem1.Visible = False
        answer1.Visible = False
        answer2.Visible = False
        answer3.Visible = False
        answer4.Visible = False
        answer5.Visible = False
        answer6.Visible = False
        problem2.Visible = False
        screen2txt4.Visible = False
        filenum.Visible = False
        problem3.Visible = False
        answer7.Visible = False
        answer8.Visible = False
        answer9.Visible = False
        color1.Visible = False
        color2.Visible = False
        color3.Visible = False
        color4.Visible = False
        color5.Visible = False
        color6.Visible = False
        command1.Visible = False
        pic1.Visible = False
        pic2.Visible = False
        pic3.Visible = False
        pic4.Visible = False
        pic5.Visible = False
        command2.Visible = False
        fake1.Visible = False
        fake2.Visible = False
        fake3.Visible = False
        fake4.Visible = False
        fake5.Visible = False
        fake6.Visible = False
        fake7.Visible = False
        fake8.Visible = False
        fake9.Visible = False
        fake10.Visible = False
        command3.Visible = False
        straw1.Visible = False
        straw2.Visible = False
        straw3.Visible = False
        straw4.Visible = False
        straw5.Visible = False
        finish.Visible = False
        finish2.Visible = False
        filenum2.Visible = False


    End Sub
    'COUNTS DOWN THE TTIME
    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick
        timerCount = timerCount - 1
        lblTimer.Text = timerCount
        lblTimer2.Text = timerCount
        If (timerCount <= 0) Then
            MsgBox("Oh no! Time has run out! You lose! ")
        End If


    End Sub

    Private Sub answer1_Click(sender As Object, e As EventArgs) Handles answer1.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub answer2_Click(sender As Object, e As EventArgs) Handles answer2.Click
        fileCount = fileCount + 1
    End Sub
    'ONCE CORRECT ANSWER IS PICKED, IT GOES TO NEXT QUESTION
    Private Sub answer3_Click(sender As Object, e As EventArgs) Handles answer3.Click
        problem1.Visible = False
        answer1.Visible = False
        answer2.Visible = False
        answer3.Visible = False
        problem2.Visible = True
        answer4.Visible = True
        answer5.Visible = True
        answer6.Visible = True


    End Sub

    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        filenum.Text = fileCount
    End Sub

    Private Sub answer5_Click(sender As Object, e As EventArgs) Handles answer5.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub answer6_Click(sender As Object, e As EventArgs) Handles answer6.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub answer4_Click(sender As Object, e As EventArgs) Handles answer4.Click
        answer4.Visible = False
        answer5.Visible = False
        answer6.Visible = False
        problem2.Visible = False
        problem3.Visible = True
        answer7.Visible = True
        answer8.Visible = True
        answer9.Visible = True
    End Sub

    Private Sub answer7_Click(sender As Object, e As EventArgs) Handles answer7.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub answer9_Click(sender As Object, e As EventArgs) Handles answer9.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub answer8_Click(sender As Object, e As EventArgs) Handles answer8.Click
        'DONE WITH MATH PHASE... CLEAR STUFF AWAY
        problem3.Visible = False
        answer7.Visible = False
        answer8.Visible = False
        answer9.Visible = False
        screen2txt2.Visible = False
        screen2txt3.Visible = False
        color1.Visible = True
        color2.Visible = True
        color3.Visible = True
        color4.Visible = True
        color5.Visible = True
        color6.Visible = True
        command1.Visible = True

    End Sub

    Private Sub color1_Click(sender As Object, e As EventArgs) Handles color1.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub color2_Click(sender As Object, e As EventArgs) Handles color2.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub color3_Click(sender As Object, e As EventArgs) Handles color3.Click
        color1.Visible = False
        color2.Visible = False
        color3.Visible = False
        color4.Visible = False
        color5.Visible = False
        color6.Visible = False
        command1.Visible = False
        pic1.Visible = True
        pic2.Visible = True
        pic3.Visible = True
        pic4.Visible = True
        pic5.Visible = True
        command2.Visible = True

    End Sub

    Private Sub color4_Click(sender As Object, e As EventArgs) Handles color4.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub color5_Click(sender As Object, e As EventArgs) Handles color5.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub color6_Click(sender As Object, e As EventArgs) Handles color6.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub pic2_Click(sender As Object, e As EventArgs) Handles pic2.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub pic3_Click(sender As Object, e As EventArgs) Handles pic3.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub pic5_Click(sender As Object, e As EventArgs) Handles pic5.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub pic4_Click(sender As Object, e As EventArgs) Handles pic4.Click
        fileCount = fileCount + 1
    End Sub

    'STRAWBERRY STUFF
    Private Sub pic1_Click(sender As Object, e As EventArgs) Handles pic1.Click
        pic1.Visible = False
        pic2.Visible = False
        pic3.Visible = False
        pic4.Visible = False
        pic5.Visible = False
        command2.Visible = False
        fake1.Visible = True
        fake2.Visible = True
        fake3.Visible = True
        fake4.Visible = True
        fake5.Visible = True
        fake6.Visible = True
        fake7.Visible = True
        fake8.Visible = True
        fake9.Visible = True
        fake10.Visible = True
        command3.Visible = True
        straw1.Visible = True
        straw2.Visible = True
        straw3.Visible = True
        straw4.Visible = True
        straw5.Visible = True
    End Sub

    Private Sub fake1_Click(sender As Object, e As EventArgs) Handles fake1.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake2_Click(sender As Object, e As EventArgs) Handles fake2.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake3_Click(sender As Object, e As EventArgs) Handles fake3.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake4_Click(sender As Object, e As EventArgs) Handles fake4.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake5_Click(sender As Object, e As EventArgs) Handles fake5.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake6_Click(sender As Object, e As EventArgs) Handles fake6.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake7_Click(sender As Object, e As EventArgs) Handles fake7.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake8_Click(sender As Object, e As EventArgs) Handles fake8.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake9_Click(sender As Object, e As EventArgs) Handles fake9.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub fake10_Click(sender As Object, e As EventArgs) Handles fake10.Click
        fileCount = fileCount + 1
    End Sub

    Private Sub straw1_Click(sender As Object, e As EventArgs) Handles straw1.Click
        straw1.Visible = False
        strawCount = strawCount + 1
    End Sub

    Private Sub straw2_Click(sender As Object, e As EventArgs) Handles straw2.Click
        straw2.Visible = False
        strawCount = strawCount + 1
    End Sub

    Private Sub straw3_Click(sender As Object, e As EventArgs) Handles straw3.Click
        straw3.Visible = False
        strawCount = strawCount + 1
    End Sub

    Private Sub straw4_Click(sender As Object, e As EventArgs) Handles straw4.Click
        straw4.Visible = False
        strawCount = strawCount + 1
    End Sub

    Private Sub straw5_Click(sender As Object, e As EventArgs) Handles straw5.Click
        straw5.Visible = False
        strawCount = strawCount + 1
    End Sub

    Private Sub Timer3_Tick(sender As Object, e As EventArgs) Handles Timer3.Tick
        If (strawCount >= 5) Then
            fake1.Visible = False
            fake2.Visible = False
            fake3.Visible = False
            fake4.Visible = False
            fake5.Visible = False
            fake6.Visible = False
            fake7.Visible = False
            fake8.Visible = False
            fake9.Visible = False
            fake10.Visible = False
            command3.Visible = False
            Timer1.Enabled = False
            screen2txt1.Enabled = False
            lblTimer2.Visible = False
            screen2txt4.Visible = False
            filenum.Visible = False
            filenum2.Visible = True
            filenum2.Text = fileCount
            finish.Visible = True
            finish2.Visible = True
            screen2txt1.Visible = False
        End If
    End Sub


End Class
