
Imports System.IO
Public Class Form1
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBoxA.Text = ""
        TextBoxE.Text = ""
        TextBoxT.Text = ""
        TextBoxF.Text = ""
        TextBoxN.Text = ""
        TextBoxL.Text = ""
        TextBoxM.Text = ""

    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim records As StreamWriter

        records = File.CreateText("records.txt")
        records.WriteLine(TextBoxA.Text)
        records.WriteLine(TextBoxM.Text)
        records.WriteLine(TextBoxL.Text)
        records.WriteLine(TextBoxN.Text)
        If ComboBox1.SelectedIndex = 0 Then
            records.WriteLine("Accounting")
        ElseIf ComboBox1.SelectedIndex = 1 Then
            records.WriteLine("Administration")
        ElseIf ComboBox1.SelectedIndex = 2 Then
            records.WriteLine("Marketing")
        ElseIf ComboBox1.SelectedIndex = 3 Then
            records.WriteLine("MIS")
        Else
            records.WriteLine("Sales")
        End If
        records.WriteLine(TextBoxT.Text)
        records.WriteLine(TextBoxE.Text)
        records.WriteLine(TextBoxA.Text)
        records.Close()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Me.Close()
    End Sub
End Class
