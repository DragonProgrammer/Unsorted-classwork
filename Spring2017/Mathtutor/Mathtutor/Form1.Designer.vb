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
        Me.btnexit = New System.Windows.Forms.Button()
        Me.btnAnswer = New System.Windows.Forms.Button()
        Me.lblMath = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnexit
        '
        Me.btnexit.Location = New System.Drawing.Point(154, 75)
        Me.btnexit.Name = "btnexit"
        Me.btnexit.Size = New System.Drawing.Size(75, 23)
        Me.btnexit.TabIndex = 0
        Me.btnexit.Text = "E&xit"
        Me.btnexit.UseVisualStyleBackColor = True
        '
        'btnAnswer
        '
        Me.btnAnswer.Location = New System.Drawing.Point(18, 75)
        Me.btnAnswer.Name = "btnAnswer"
        Me.btnAnswer.Size = New System.Drawing.Size(111, 23)
        Me.btnAnswer.TabIndex = 1
        Me.btnAnswer.Text = "Show &Answer"
        Me.btnAnswer.UseVisualStyleBackColor = True
        '
        'lblMath
        '
        Me.lblMath.AutoSize = True
        Me.lblMath.Font = New System.Drawing.Font("Microsoft Sans Serif", 21.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMath.Location = New System.Drawing.Point(33, 25)
        Me.lblMath.Name = "lblMath"
        Me.lblMath.Size = New System.Drawing.Size(181, 33)
        Me.lblMath.TabIndex = 2
        Me.lblMath.Text = "18 +  64 = ?"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(244, 105)
        Me.Controls.Add(Me.lblMath)
        Me.Controls.Add(Me.btnAnswer)
        Me.Controls.Add(Me.btnexit)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnexit As Button
    Friend WithEvents btnAnswer As Button
    Friend WithEvents lblMath As Label
End Class
