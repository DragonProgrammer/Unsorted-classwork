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
        Me.btncalc = New System.Windows.Forms.Button()
        Me.btnexit = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.lblarea = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.TextBoxLeng = New System.Windows.Forms.TextBox()
        Me.TextBoxWid = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'btncalc
        '
        Me.btncalc.Location = New System.Drawing.Point(16, 141)
        Me.btncalc.Name = "btncalc"
        Me.btncalc.Size = New System.Drawing.Size(75, 23)
        Me.btncalc.TabIndex = 0
        Me.btncalc.Text = "Calculate"
        Me.btncalc.UseVisualStyleBackColor = True
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(149, 141)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 1
        Me.btnexit.Text = "Exit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(33, 23)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(40, 13)
        Me.Label1.TabIndex = 2
        Me.Label1.Text = "Length"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(36, 61)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(35, 13)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "Width"
        '
        'lblarea
        '
        Me.lblarea.AutoSize = True
        Me.lblarea.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblarea.Location = New System.Drawing.Point(32, 106)
        Me.lblarea.Name = "lblarea"
        Me.lblarea.Size = New System.Drawing.Size(180, 15)
        Me.lblarea.TabIndex = 4
        Me.lblarea.Text = "//Area displayed here after caculate"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(106, 90)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(29, 13)
        Me.Label3.TabIndex = 5
        Me.Label3.Text = "Area"
        '
        'TextBoxLeng
        '
        Me.TextBoxLeng.Location = New System.Drawing.Point(79, 20)
        Me.TextBoxLeng.Name = "TextBoxLeng"
        Me.TextBoxLeng.Size = New System.Drawing.Size(100, 20)
        Me.TextBoxLeng.TabIndex = 6
        '
        'TextBoxWid
        '
        Me.TextBoxWid.Location = New System.Drawing.Point(79, 56)
        Me.TextBoxWid.Name = "TextBoxWid"
        Me.TextBoxWid.Size = New System.Drawing.Size(100, 20)
        Me.TextBoxWid.TabIndex = 7
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(245, 177)
        Me.Controls.Add(Me.TextBoxWid)
        Me.Controls.Add(Me.TextBoxLeng)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.lblarea)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.btnexit)
        Me.Controls.Add(Me.btncalc)
        Me.Name = "Form1"
        Me.Text = "Room Size Calculator"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btncalc As Button
    Friend WithEvents btnexit As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents lblarea As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents TextBoxLeng As TextBox
    Friend WithEvents TextBoxWid As TextBox
End Class
