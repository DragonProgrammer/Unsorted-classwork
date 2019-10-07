<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmQuest
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
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.LevelSelectToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.PlayerToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.JudgeLvl1ToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.JudgeLvl2ToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.JudgeLvl3ToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ToolStripMenuItem2 = New System.Windows.Forms.ToolStripSeparator()
        Me.QuestionListToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.HelpToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.HelpTopicsToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ToolStripMenuItem1 = New System.Windows.Forms.ToolStripSeparator()
        Me.VeiwCardToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.VeiwBoardStateToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.BtnPre = New System.Windows.Forms.Button()
        Me.BtnNext = New System.Windows.Forms.Button()
        Me.BtnVCard = New System.Windows.Forms.Button()
        Me.btnStart = New System.Windows.Forms.Button()
        Me.lblNum = New System.Windows.Forms.Label()
        Me.lblQuest = New System.Windows.Forms.Label()
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem, Me.HelpToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(284, 24)
        Me.MenuStrip1.TabIndex = 0
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.LevelSelectToolStripMenuItem, Me.ToolStripMenuItem2, Me.QuestionListToolStripMenuItem})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "File"
        '
        'LevelSelectToolStripMenuItem
        '
        Me.LevelSelectToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.PlayerToolStripMenuItem, Me.JudgeLvl1ToolStripMenuItem, Me.JudgeLvl2ToolStripMenuItem, Me.JudgeLvl3ToolStripMenuItem})
        Me.LevelSelectToolStripMenuItem.Name = "LevelSelectToolStripMenuItem"
        Me.LevelSelectToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.LevelSelectToolStripMenuItem.Text = "Level Select"
        '
        'PlayerToolStripMenuItem
        '
        Me.PlayerToolStripMenuItem.Name = "PlayerToolStripMenuItem"
        Me.PlayerToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.PlayerToolStripMenuItem.Text = "Player"
        '
        'JudgeLvl1ToolStripMenuItem
        '
        Me.JudgeLvl1ToolStripMenuItem.Name = "JudgeLvl1ToolStripMenuItem"
        Me.JudgeLvl1ToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.JudgeLvl1ToolStripMenuItem.Text = "Judge lvl 1"
        '
        'JudgeLvl2ToolStripMenuItem
        '
        Me.JudgeLvl2ToolStripMenuItem.Name = "JudgeLvl2ToolStripMenuItem"
        Me.JudgeLvl2ToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.JudgeLvl2ToolStripMenuItem.Text = "Judge lvl 2"
        '
        'JudgeLvl3ToolStripMenuItem
        '
        Me.JudgeLvl3ToolStripMenuItem.Name = "JudgeLvl3ToolStripMenuItem"
        Me.JudgeLvl3ToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.JudgeLvl3ToolStripMenuItem.Text = "judge lvl 3"
        '
        'ToolStripMenuItem2
        '
        Me.ToolStripMenuItem2.Name = "ToolStripMenuItem2"
        Me.ToolStripMenuItem2.Size = New System.Drawing.Size(149, 6)
        '
        'QuestionListToolStripMenuItem
        '
        Me.QuestionListToolStripMenuItem.Name = "QuestionListToolStripMenuItem"
        Me.QuestionListToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.QuestionListToolStripMenuItem.Text = "Question List"
        '
        'HelpToolStripMenuItem
        '
        Me.HelpToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.HelpTopicsToolStripMenuItem, Me.ToolStripMenuItem1, Me.VeiwCardToolStripMenuItem, Me.VeiwBoardStateToolStripMenuItem})
        Me.HelpToolStripMenuItem.Name = "HelpToolStripMenuItem"
        Me.HelpToolStripMenuItem.Size = New System.Drawing.Size(44, 20)
        Me.HelpToolStripMenuItem.Text = "Help"
        '
        'HelpTopicsToolStripMenuItem
        '
        Me.HelpTopicsToolStripMenuItem.Name = "HelpTopicsToolStripMenuItem"
        Me.HelpTopicsToolStripMenuItem.Size = New System.Drawing.Size(161, 22)
        Me.HelpTopicsToolStripMenuItem.Text = "Help Topics"
        '
        'ToolStripMenuItem1
        '
        Me.ToolStripMenuItem1.Name = "ToolStripMenuItem1"
        Me.ToolStripMenuItem1.Size = New System.Drawing.Size(158, 6)
        '
        'VeiwCardToolStripMenuItem
        '
        Me.VeiwCardToolStripMenuItem.Name = "VeiwCardToolStripMenuItem"
        Me.VeiwCardToolStripMenuItem.Size = New System.Drawing.Size(161, 22)
        Me.VeiwCardToolStripMenuItem.Text = "Veiw Card"
        '
        'VeiwBoardStateToolStripMenuItem
        '
        Me.VeiwBoardStateToolStripMenuItem.Name = "VeiwBoardStateToolStripMenuItem"
        Me.VeiwBoardStateToolStripMenuItem.Size = New System.Drawing.Size(161, 22)
        Me.VeiwBoardStateToolStripMenuItem.Text = "Veiw Board State"
        '
        'BtnPre
        '
        Me.BtnPre.Location = New System.Drawing.Point(13, 215)
        Me.BtnPre.Name = "BtnPre"
        Me.BtnPre.Size = New System.Drawing.Size(75, 34)
        Me.BtnPre.TabIndex = 1
        Me.BtnPre.Text = "Previous Question"
        Me.BtnPre.UseVisualStyleBackColor = True
        '
        'BtnNext
        '
        Me.BtnNext.Location = New System.Drawing.Point(95, 215)
        Me.BtnNext.Name = "BtnNext"
        Me.BtnNext.Size = New System.Drawing.Size(75, 34)
        Me.BtnNext.TabIndex = 2
        Me.BtnNext.Text = "Next Question"
        Me.BtnNext.UseVisualStyleBackColor = True
        '
        'BtnVCard
        '
        Me.BtnVCard.Location = New System.Drawing.Point(177, 215)
        Me.BtnVCard.Name = "BtnVCard"
        Me.BtnVCard.Size = New System.Drawing.Size(75, 34)
        Me.BtnVCard.TabIndex = 3
        Me.BtnVCard.Text = "Veiw Cards"
        Me.BtnVCard.UseVisualStyleBackColor = True
        '
        'btnStart
        '
        Me.btnStart.AutoSize = True
        Me.btnStart.Location = New System.Drawing.Point(114, 123)
        Me.btnStart.Name = "btnStart"
        Me.btnStart.Size = New System.Drawing.Size(75, 23)
        Me.btnStart.TabIndex = 4
        Me.btnStart.Text = "Start Quiz"
        Me.btnStart.UseVisualStyleBackColor = True
        '
        'lblNum
        '
        Me.lblNum.AutoSize = True
        Me.lblNum.Location = New System.Drawing.Point(13, 37)
        Me.lblNum.Name = "lblNum"
        Me.lblNum.Size = New System.Drawing.Size(39, 13)
        Me.lblNum.TabIndex = 5
        Me.lblNum.Text = "Label1"
        '
        'lblQuest
        '
        Me.lblQuest.AutoSize = True
        Me.lblQuest.Location = New System.Drawing.Point(59, 37)
        Me.lblQuest.Name = "lblQuest"
        Me.lblQuest.Size = New System.Drawing.Size(39, 13)
        Me.lblQuest.TabIndex = 6
        Me.lblQuest.Text = "Label2"
        '
        'frmQuest
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.lblQuest)
        Me.Controls.Add(Me.lblNum)
        Me.Controls.Add(Me.btnStart)
        Me.Controls.Add(Me.BtnVCard)
        Me.Controls.Add(Me.BtnNext)
        Me.Controls.Add(Me.BtnPre)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "frmQuest"
        Me.Text = "Form1"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents MenuStrip1 As MenuStrip
    Friend WithEvents FileToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents LevelSelectToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents PlayerToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents JudgeLvl1ToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents JudgeLvl2ToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents JudgeLvl3ToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ToolStripMenuItem2 As ToolStripSeparator
    Friend WithEvents QuestionListToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents HelpToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents HelpTopicsToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ToolStripMenuItem1 As ToolStripSeparator
    Friend WithEvents VeiwCardToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents VeiwBoardStateToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents BtnPre As Button
    Friend WithEvents BtnNext As Button
    Friend WithEvents BtnVCard As Button
    Friend WithEvents btnStart As Button
    Friend WithEvents lblNum As Label
    Friend WithEvents lblQuest As Label
End Class
