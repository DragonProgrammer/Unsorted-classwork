Public Class frmQuest
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        btnStart.Enabled = False
        btnStart.Visible = False
        BtnPre.Enabled = False
        BtnPre.Visible = False
        BtnNext.Visible = False
        BtnNext.Enabled = False
        BtnVCard.Visible = False
        BtnVCard.Enabled = False
        lblNum.Visible = False
        lblQuest.Visible = False
    End Sub

    Private Sub JudgeLvl2ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles JudgeLvl2ToolStripMenuItem.Click
        intLvl = 2
        btnStart.Text = "Start Judge Level 2 Quiz"
        btnStart.Visible = True
        btnStart.Enabled = True
    End Sub

    Private Sub JudgeLvl3ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles JudgeLvl3ToolStripMenuItem.Click
        intLvl = 3
        btnStart.Text = "Start Judge Level 3 Quiz"

    End Sub

    Private Sub btnStart_Click(sender As Object, e As EventArgs) Handles btnStart.Click
        intQuest = 1
        btnStart.Visible = False
        btnStart.Enabled = False
        buttons(intQuest)
        lblNum.Visible = True
        lblQuest.Visible = True
    End Sub

    Private Sub PlayerToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles PlayerToolStripMenuItem.Click
        intLvl = 1
        btnStart.Text = "Start Player Quiz"
        btnStart.Visible = True
        btnStart.Enabled = True
    End Sub

    Private Sub JudgeLvl1ToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles JudgeLvl1ToolStripMenuItem.Click
        intLvl = 2
        btnStart.Text = "Start Judge Level 1 Quiz"
        btnStart.Visible = True
        btnStart.Enabled = True
    End Sub

    Private Sub BtnPre_Click(sender As Object, e As EventArgs) Handles BtnPre.Click
        intQuest -= 1
        buttons(intQuest)
    End Sub

    Private Sub BtnNext_Click(sender As Object, e As EventArgs) Handles BtnNext.Click
        intQuest += 1
        buttons(intQuest)
    End Sub

    Private Sub VeiwCardToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles VeiwCardToolStripMenuItem.Click
        Dim frmCard As New frmCView
        frmCard.Show()
    End Sub
End Class
