Public Class Form1

    'Form Level Variables
    Dim clickCount As Integer = 0
    Dim timerCount As Integer = 0

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        btnClick1.Enabled = False
        btnClick2.Enabled = False
    End Sub

    Private Sub btnStart_Click(sender As Object, e As EventArgs) Handles btnStart.Click
        'reset counters
        clickCount = 0
        timerCount = 0
        lblNumClicks.Text = "0"

        'ready to play!
        btnClick1.Enabled = True
        btnClick2.Enabled = False
        tmr1.Enabled = True
    End Sub

    Private Sub btnClick1_Click(sender As Object, e As EventArgs) Handles btnClick1.Click
        clickCount = clickCount + 1
        lblNumClicks.Text = clickCount

        btnClick1.Enabled = False
        btnClick2.Enabled = True
    End Sub

    Private Sub btnClick2_Click(sender As Object, e As EventArgs) Handles btnClick2.Click
        clickCount = clickCount + 1
        lblNumClicks.Text = clickCount

        btnClick1.Enabled = True
        btnClick2.Enabled = False
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Application.Exit()
    End Sub

    Private Sub tmr1_Tick(sender As Object, e As EventArgs) Handles tmr1.Tick
        timerCount = timerCount + 1
        lblTimer.Text = timerCount

        'game over?
        If timerCount = 30 Then
            btnClick1.Enabled = False
            btnClick2.Enabled = False
            tmr1.Enabled = False

        End If
    End Sub

End Class
