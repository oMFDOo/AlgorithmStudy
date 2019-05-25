using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 연습하자_
{
    public partial class Form1 : Form
    {
        enum CalcOperator
        {
            Sum,
            Sub,
            Mul,
            Div
        }

        CalcOperator calcoper;
        public Form1()
        {
            InitializeComponent();
        }

        double dStartValue = 0, middleValue = 0 ,dEndValue = 0;

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void num1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0") {
                textBox1.Text = "1";
            }
            else {
                textBox1.Text = textBox1.Text + "1";
            }
        }

        private void num2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "2";
            }
            else
            {
                textBox1.Text = textBox1.Text + "2";
            }
        }

        private void num3_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "3";
            }
            else
            {
                textBox1.Text = textBox1.Text + "3";
            }
        }

        private void num4_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "4";
            }
            else
            {
                textBox1.Text = textBox1.Text + "4";
            }
        }

        private void num5_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "5";
            }
            else
            {
                textBox1.Text = textBox1.Text + "5";
            }
        }

        private void num6_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "6";
            }
            else
            {
                textBox1.Text = textBox1.Text + "6";
            }
        }

        private void num7_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "7";
            }
            else
            {
                textBox1.Text = textBox1.Text + "7";
            }
        }

        private void num8_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "8";
            }
            else
            {
                textBox1.Text = textBox1.Text + "8";
            }
        }

        private void num9_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "9";
            }
            else
            {
                textBox1.Text = textBox1.Text + "9";
            }
        }

        private void num0_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "0")
            {
                textBox1.Text = "0";
            }
            else
            {
                textBox1.Text = textBox1.Text + "0";
            }
        }

        private void sum_Click(object sender, EventArgs e)
        {
            dStartValue = Convert.ToDouble(textBox1.Text);  //첫번째 값 지정
            calcoper = CalcOperator.Sum;                    // 계산법 지정
            textBox1.Text = "0";                // 텍스트박스 0으로 초기화(새로운 값을 지정받기 위해)
        }

        private void sub_Click(object sender, EventArgs e)
        {
            
            dStartValue = Convert.ToDouble(textBox1.Text);
            calcoper = CalcOperator.Sub;
            textBox1.Text = "0";
            
        }

        private void mul_Click(object sender, EventArgs e)
        {
            dStartValue = Convert.ToDouble(textBox1.Text);
            calcoper = CalcOperator.Mul;
            textBox1.Text = "0";
        }

        private void div_Click(object sender, EventArgs e)
        {
            dStartValue = Convert.ToDouble(textBox1.Text);
            calcoper = CalcOperator.Div;
            textBox1.Text = "0";
        }

        private void cancel_Click(object sender, EventArgs e)
        {
            MessageBox.Show("하하! 구현 할 줄 모른다!");
        }

        private void result_Click(object sender, EventArgs e)
        {
            middleValue = Convert.ToDouble(textBox1.Text);
            switch (calcoper)
            {
                case CalcOperator.Sum:
                    {
                        dEndValue = dStartValue + middleValue;
                    }
                    break;
                case CalcOperator.Sub:
                    {
                        dEndValue = dStartValue - middleValue;
                    }
                    break;
                case CalcOperator.Mul:
                    {
                        dEndValue = dStartValue * middleValue;
                    }
                    break;
                case CalcOperator.Div:
                    {
                        dEndValue = dStartValue / middleValue;
                    }
                    break;
            }
            textBox1.Text = dEndValue.ToString();
        }

        private void button12_Click(object sender, EventArgs e)
        {
            MessageBox.Show("하하! 구현 안 할 거다!");
        }
    }
}
