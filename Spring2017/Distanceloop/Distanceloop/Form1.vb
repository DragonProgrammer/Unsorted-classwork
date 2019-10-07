Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim intSpeed As Integer
        Dim intTime As Integer
        Dim intdistance As Integer
        Dim strspeed As String
        Dim strtime As String
        Dim strLn1 As String
        Dim strLn2 As String
        Dim strTable As String
        Dim strTotal As String
        Dim intcount As Integer = 1
        Dim inttemp As Integer

        strspeed = InputBox("Enter Speed in MPH", "Enter Data")
        intSpeed = CInt(strspeed)
        strtime = InputBox("Enter time traved in hours", "Enter Data")
        intTime = CInt(strtime)

        intdistance = intSpeed * intTime

        strLn1 = "Vehicle Speed: " & intSpeed & " MPH"
        strLn2 = "Time Traveled: " & intTime & " hours"
        strTotal = "Total Distance Traveled: " & intdistance

        lstOut.Items.Add(strLn1)
        lstOut.Items.Add(strLn2)
        lstOut.Items.Add("Hours    Distance Traveled")
        lstOut.Items.Add("__________________________")
        Do While intcount <= intTime
            inttemp = intcount * intSpeed
            strTable = intcount & "         " & inttemp
            lstOut.Items.Add(strTable)
            intcount += 1
        Loop
        lstOut.Items.Add(strTotal)
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Me.Close()
    End Sub
End Class
