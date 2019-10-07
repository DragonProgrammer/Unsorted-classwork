<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmCView
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
        Me.cboCards = New System.Windows.Forms.ComboBox()
        Me.pbCard = New System.Windows.Forms.PictureBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.lblTest = New System.Windows.Forms.Label()
        CType(Me.pbCard, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'cboCards
        '
        Me.cboCards.FormattingEnabled = True
        Me.cboCards.Items.AddRange(New Object() {"Twiddle", "Giant Growth", "Dragon-scarred Bear", "Juniper Order Advocate"})
        Me.cboCards.Location = New System.Drawing.Point(13, 13)
        Me.cboCards.Name = "cboCards"
        Me.cboCards.Size = New System.Drawing.Size(169, 21)
        Me.cboCards.TabIndex = 0
        '
        'pbCard
        '
        Me.pbCard.Location = New System.Drawing.Point(13, 51)
        Me.pbCard.Name = "pbCard"
        Me.pbCard.Size = New System.Drawing.Size(169, 186)
        Me.pbCard.TabIndex = 1
        Me.pbCard.TabStop = False
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(32, 243)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(117, 23)
        Me.Button1.TabIndex = 2
        Me.Button1.Text = "View More Cards"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'lblTest
        '
        Me.lblTest.AutoSize = True
        Me.lblTest.Location = New System.Drawing.Point(13, 223)
        Me.lblTest.Name = "lblTest"
        Me.lblTest.Size = New System.Drawing.Size(39, 13)
        Me.lblTest.TabIndex = 3
        Me.lblTest.Text = "Label1"
        '
        'frmCView
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(204, 272)
        Me.Controls.Add(Me.lblTest)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.pbCard)
        Me.Controls.Add(Me.cboCards)
        Me.Name = "frmCView"
        Me.Text = "cardview1"
        CType(Me.pbCard, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents cboCards As ComboBox
    Friend WithEvents pbCard As PictureBox
    Friend WithEvents Button1 As Button
    Friend WithEvents lblTest As Label
End Class
