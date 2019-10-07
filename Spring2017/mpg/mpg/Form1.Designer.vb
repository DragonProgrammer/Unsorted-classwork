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
        Me.BtnCalc = New System.Windows.Forms.Button()
        Me.btnCLear = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.lblMPG = New System.Windows.Forms.Label()
        Me.txtMiles = New System.Windows.Forms.TextBox()
        Me.txtGal = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'BtnCalc
        '
        Me.BtnCalc.Location = New System.Drawing.Point(14, 198)
        Me.BtnCalc.Name = "BtnCalc"
        Me.BtnCalc.Size = New System.Drawing.Size(75, 40)
        Me.BtnCalc.TabIndex = 0
        Me.BtnCalc.Text = "&Calculate MPG"
        Me.BtnCalc.UseVisualStyleBackColor = True
        '
        'btnCLear
        '
        Me.btnCLear.Location = New System.Drawing.Point(95, 198)
        Me.btnCLear.Name = "btnCLear"
        Me.btnCLear.Size = New System.Drawing.Size(75, 40)
        Me.btnCLear.TabIndex = 1
        Me.btnCLear.Text = "C&lear"
        Me.btnCLear.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(176, 198)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 40)
        Me.btnExit.TabIndex = 2
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.Location = New System.Drawing.Point(24, 46)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(100, 35)
        Me.Label1.TabIndex = 3
        Me.Label1.Text = "Gallons of gas the car can hold:"
        '
        'Label2
        '
        Me.Label2.Location = New System.Drawing.Point(24, 81)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(100, 43)
        Me.Label2.TabIndex = 4
        Me.Label2.Text = "Number of miles it can be driven on a ful tank:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(24, 146)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(83, 13)
        Me.Label3.TabIndex = 5
        Me.Label3.Text = "Miles per gallon:"
        '
        'lblMPG
        '
        Me.lblMPG.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblMPG.Location = New System.Drawing.Point(139, 136)
        Me.lblMPG.Name = "lblMPG"
        Me.lblMPG.Size = New System.Drawing.Size(100, 23)
        Me.lblMPG.TabIndex = 6
        '
        'txtMiles
        '
        Me.txtMiles.Location = New System.Drawing.Point(139, 91)
        Me.txtMiles.Name = "txtMiles"
        Me.txtMiles.Size = New System.Drawing.Size(100, 20)
        Me.txtMiles.TabIndex = 7
        '
        'txtGal
        '
        Me.txtGal.Location = New System.Drawing.Point(139, 49)
        Me.txtGal.Name = "txtGal"
        Me.txtGal.Size = New System.Drawing.Size(100, 20)
        Me.txtGal.TabIndex = 8
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(281, 259)
        Me.Controls.Add(Me.txtGal)
        Me.Controls.Add(Me.txtMiles)
        Me.Controls.Add(Me.lblMPG)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnCLear)
        Me.Controls.Add(Me.BtnCalc)
        Me.Name = "Form1"
        Me.Text = "Miles per Gallon Calculator"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnCalc As Button
    Friend WithEvents btnCLear As Button
    Friend WithEvents btnExit As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents lblMPG As Label
    Friend WithEvents txtMiles As TextBox
    Friend WithEvents txtGal As TextBox
End Class
