Imports System.IO
Public Class Form1
    Structure Grades
        Dim strName As String
        Dim dblGrade1 As Double
        Dim dblGrade2 As Double
        Dim dblGrade3 As Double
        Dim dblGrade4 As Double
        Dim dblGrade5 As Double
        Dim dblAver As Double
    End Structure
    Dim students(5) As Grades
    Private Sub Label1_Click(sender As Object, e As EventArgs)

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click

        Dim dbltemp As Double = 0.0
        students(0).strName = tbxn1.Text
        students(0).dblGrade1 = CDbl(tbx1_1.Text)
        dbltemp += students(0).dblGrade1
        students(0).dblGrade2 = CDbl(tbx1_2.Text)
        dbltemp += students(0).dblGrade2
        students(0).dblGrade3 = CDbl(tbx1_3.Text)
        dbltemp += students(0).dblGrade3
        students(0).dblGrade4 = CDbl(tbx1_4.Text)
        dbltemp += students(0).dblGrade4
        students(0).dblGrade5 = CDbl(tbx1_5.Text)
        dbltemp += students(0).dblGrade5
        students(0).dblAver = dbltemp / 5
        dbltemp = 0.0
        students(1).strName = tbxn2.Text
        students(1).dblGrade1 = CDbl(tbx2_1.Text)
        dbltemp += students(1).dblGrade1
        students(1).dblGrade2 = CDbl(tbx2_2.Text)
        dbltemp += students(1).dblGrade2
        students(1).dblGrade3 = CDbl(tbx2_3.Text)
        dbltemp += students(1).dblGrade3
        students(1).dblGrade4 = CDbl(tbx2_4.Text)
        dbltemp += students(1).dblGrade4
        students(1).dblGrade5 = CDbl(tbx2_5.Text)
        dbltemp += students(1).dblGrade5
        students(1).dblAver = dbltemp / 5
        dbltemp = 0.0
        students(2).strName = tbxn3.Text
        students(2).dblGrade1 = CDbl(tbx3_1.Text)
        dbltemp += students(2).dblGrade1
        students(2).dblGrade2 = CDbl(tbx3_2.Text)
        dbltemp += students(2).dblGrade2
        students(2).dblGrade3 = CDbl(tbx3_3.Text)
        dbltemp += students(2).dblGrade3
        students(2).dblGrade4 = CDbl(tbx3_4.Text)
        dbltemp += students(2).dblGrade4
        students(2).dblGrade5 = CDbl(tbx3_5.Text)
        dbltemp += students(2).dblGrade5
        students(2).dblAver = dbltemp / 5
        dbltemp = 0.0
        students(3).strName = tbxn4.Text
        students(3).dblGrade1 = CDbl(tbx4_1.Text)
        dbltemp += students(3).dblGrade1
        students(3).dblGrade2 = CDbl(tbx4_2.Text)
        dbltemp += students(3).dblGrade2
        students(3).dblGrade3 = CDbl(tbx4_3.Text)
        dbltemp += students(3).dblGrade3
        students(3).dblGrade4 = CDbl(tbx4_4.Text)
        dbltemp += students(3).dblGrade4
        students(3).dblGrade5 = CDbl(tbx4_5.Text)
        dbltemp += students(3).dblGrade5
        students(3).dblAver = dbltemp / 5
        dbltemp = 0.0
        students(4).strName = tbxn5.Text
        students(4).dblGrade1 = CDbl(tbx5_1.Text)
        dbltemp += students(4).dblGrade1
        students(4).dblGrade2 = CDbl(tbx5_2.Text)
        dbltemp += students(4).dblGrade2
        students(4).dblGrade3 = CDbl(tbx5_3.Text)
        dbltemp += students(4).dblGrade3
        students(4).dblGrade4 = CDbl(tbx5_4.Text)
        dbltemp += students(4).dblGrade4
        students(4).dblGrade5 = CDbl(tbx5_5.Text)
        dbltemp += students(4).dblGrade5
        students(4).dblAver = dbltemp / 5
        dbltemp = 0.0
        students(5).strName = tbxn6.Text
        students(5).dblGrade1 = CDbl(tbx6_1.Text)
        dbltemp += students(5).dblGrade1
        students(5).dblGrade2 = CDbl(tbx6_2.Text)
        dbltemp += students(5).dblGrade2
        students(5).dblGrade3 = CDbl(tbx6_3.Text)
        dbltemp += students(5).dblGrade3
        students(5).dblGrade4 = CDbl(tbx6_4.Text)
        dbltemp += students(5).dblGrade4
        students(5).dblGrade5 = CDbl(tbx6_5.Text)
        dbltemp += students(5).dblGrade5
        students(5).dblAver = dbltemp / 5
        dbltemp = 0.0
        lblav1.Text = students(0).dblAver.ToString
        lblav2.Text = students(1).dblAver.ToString
        lblav3.Text = students(2).dblAver.ToString
        lblav4.Text = students(3).dblAver.ToString
        lblav5.Text = students(4).dblAver.ToString
        lblav6.Text = students(5).dblAver.ToString
    End Sub

    Private Sub PrintReportToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles PrintReportToolStripMenuItem.Click
        Dim Report As StreamWriter
        Report = File.CreateText("Grade.text")
        Report.WriteLine("Name                         Grades             Average")
        For intcount = 0 To 5
            Dim strtemp As String
            strtemp = String.Format("{0, -20}{1, 5}{2, 5}{3, 5}{4, 5}{5, 5}{6, 8} ", students(intcount).strName, students(intcount).dblGrade1, students(intcount).dblGrade2, students(intcount).dblGrade3, students(intcount).dblGrade4, students(intcount).dblGrade5, students(intcount).dblAver)
            Report.WriteLine(strtemp)
        Next
        Report.Close()
    End Sub

    Private Sub ReadReportToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ReadReportToolStripMenuItem.Click

    End Sub
End Class
