using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 시간제한이_있는_계산기
{
    public partial class Form1 : Form
    {
        Random randomizer = new Random();   // 난수 만들기!

        int addend1, addend2;               // 입력값 2개

        private void startButton_Click(object sender, EventArgs e) // 문제 시작
        {
            StartTheQuiz();
            startButton.Enabled = false;                // 시작 버튼 동작 중에는 못 누름

        }

        public void StartTheQuiz()
        {

            addend1 = randomizer.Next(51);      // 난수값 집어넣기
            addend2 = randomizer.Next(51);

            plusLeftLabel.Text = addend1.ToString();    // 더하기 숫자 생성 - 좌
            plusRightLabel.Text = addend2.ToString();   // 더하기 숫자 생성 - 우

            sum.Value = 0;                      // sum값 0으로 초기화
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }
    }
}
