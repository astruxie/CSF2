<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.btnStart = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.btnClick2 = New System.Windows.Forms.Button()
        Me.btnClick1 = New System.Windows.Forms.Button()
        Me.lbl1 = New System.Windows.Forms.Label()
        Me.lblNumClicks = New System.Windows.Forms.Label()
        Me.lbl2 = New System.Windows.Forms.Label()
        Me.lblTimer = New System.Windows.Forms.Label()
        Me.tmr1 = New System.Windows.Forms.Timer(Me.components)
        Me.SuspendLayout()
        '
        'btnStart
        '
        Me.btnStart.BackColor = System.Drawing.Color.Lime
        Me.btnStart.Font = New System.Drawing.Font("Consolas", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnStart.Location = New System.Drawing.Point(73, 12)
        Me.btnStart.Name = "btnStart"
        Me.btnStart.Size = New System.Drawing.Size(62, 43)
        Me.btnStart.TabIndex = 0
        Me.btnStart.Text = "Start"
        Me.btnStart.UseVisualStyleBackColor = False
        '
        'btnExit
        '
        Me.btnExit.BackColor = System.Drawing.Color.Red
        Me.btnExit.Font = New System.Drawing.Font("Consolas", 9.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnExit.Location = New System.Drawing.Point(141, 12)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(62, 43)
        Me.btnExit.TabIndex = 1
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = False
        '
        'btnClick2
        '
        Me.btnClick2.Font = New System.Drawing.Font("Consolas", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClick2.Location = New System.Drawing.Point(165, 166)
        Me.btnClick2.Name = "btnClick2"
        Me.btnClick2.Size = New System.Drawing.Size(75, 47)
        Me.btnClick2.TabIndex = 2
        Me.btnClick2.Text = "Click Me!"
        Me.btnClick2.UseVisualStyleBackColor = True
        '
        'btnClick1
        '
        Me.btnClick1.Font = New System.Drawing.Font("Consolas", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClick1.Location = New System.Drawing.Point(39, 166)
        Me.btnClick1.Name = "btnClick1"
        Me.btnClick1.Size = New System.Drawing.Size(75, 47)
        Me.btnClick1.TabIndex = 3
        Me.btnClick1.Text = "Click Me!"
        Me.btnClick1.UseVisualStyleBackColor = True
        '
        'lbl1
        '
        Me.lbl1.AutoSize = True
        Me.lbl1.Cursor = System.Windows.Forms.Cursors.AppStarting
        Me.lbl1.Font = New System.Drawing.Font("Consolas", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lbl1.Location = New System.Drawing.Point(36, 97)
        Me.lbl1.Name = "lbl1"
        Me.lbl1.Size = New System.Drawing.Size(119, 15)
        Me.lbl1.TabIndex = 4
        Me.lbl1.Text = "Number of Clicks"
        '
        'lblNumClicks
        '
        Me.lblNumClicks.AutoSize = True
        Me.lblNumClicks.Location = New System.Drawing.Point(196, 97)
        Me.lblNumClicks.Name = "lblNumClicks"
        Me.lblNumClicks.Size = New System.Drawing.Size(13, 13)
        Me.lblNumClicks.TabIndex = 5
        Me.lblNumClicks.Text = "0"
        '
        'lbl2
        '
        Me.lbl2.AutoSize = True
        Me.lbl2.Font = New System.Drawing.Font("Consolas", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lbl2.Location = New System.Drawing.Point(36, 126)
        Me.lbl2.Name = "lbl2"
        Me.lbl2.Size = New System.Drawing.Size(91, 15)
        Me.lbl2.TabIndex = 6
        Me.lbl2.Text = "Timer Status"
        '
        'lblTimer
        '
        Me.lblTimer.AutoSize = True
        Me.lblTimer.Location = New System.Drawing.Point(196, 126)
        Me.lblTimer.Name = "lblTimer"
        Me.lblTimer.Size = New System.Drawing.Size(13, 13)
        Me.lblTimer.TabIndex = 7
        Me.lblTimer.Text = "0"
        '
        'tmr1
        '
        Me.tmr1.Interval = 1000
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lblTimer)
        Me.Controls.Add(Me.lbl2)
        Me.Controls.Add(Me.lblNumClicks)
        Me.Controls.Add(Me.lbl1)
        Me.Controls.Add(Me.btnClick1)
        Me.Controls.Add(Me.btnClick2)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnStart)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnStart As Button
    Friend WithEvents btnExit As Button
    Friend WithEvents btnClick2 As Button
    Friend WithEvents btnClick1 As Button
    Friend WithEvents lbl1 As Label
    Friend WithEvents lblNumClicks As Label
    Friend WithEvents lbl2 As Label
    Friend WithEvents lblTimer As Label
    Friend WithEvents tmr1 As Timer
End Class
