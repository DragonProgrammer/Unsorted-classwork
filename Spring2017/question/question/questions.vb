Module questions
    Public intLvl As Integer
    Public intQuest As Integer

    Public Sub buttons(intQuest)
        If intQuest = 1 Then
            frmQuest.BtnPre.Enabled = False
            frmQuest.BtnPre.Visible = False
            frmQuest.BtnNext.Visible = True
            frmQuest.BtnNext.Enabled = True
        ElseIf intQuest = 25 Then
            frmQuest.BtnPre.Enabled = True
            frmQuest.BtnPre.Visible = True
            frmQuest.BtnNext.Visible = False
            frmQuest.BtnNext.Enabled = False
        Else
            frmQuest.BtnPre.Enabled = True
            frmQuest.BtnPre.Visible = True
            frmQuest.BtnNext.Visible = True
            frmQuest.BtnNext.Enabled = True
        End If
        frmQuest.lblNum.Text = intQuest.ToString & ")"
    End Sub
End Module
