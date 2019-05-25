namespace 시간제한이_있는_계산기
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.timeLable = new System.Windows.Forms.Label();
            this.plusLeftLabel = new System.Windows.Forms.Label();
            this.plusRightLabel = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.sum = new System.Windows.Forms.NumericUpDown();
            this.label1 = new System.Windows.Forms.Label();
            this.difference = new System.Windows.Forms.NumericUpDown();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.minusRightLabel = new System.Windows.Forms.Label();
            this.minusLeftLabel = new System.Windows.Forms.Label();
            this.product = new System.Windows.Forms.NumericUpDown();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.timesRightLabel = new System.Windows.Forms.Label();
            this.timesLeftLabel = new System.Windows.Forms.Label();
            this.quotient = new System.Windows.Forms.NumericUpDown();
            this.label12 = new System.Windows.Forms.Label();
            this.label13 = new System.Windows.Forms.Label();
            this.dividedRightLabel = new System.Windows.Forms.Label();
            this.dividedLeftLabel = new System.Windows.Forms.Label();
            this.startButton = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.sum)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.difference)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.product)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.quotient)).BeginInit();
            this.SuspendLayout();
            // 
            // timeLable
            // 
            this.timeLable.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(224)))), ((int)(((byte)(224)))), ((int)(((byte)(224)))));
            this.timeLable.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.timeLable.Font = new System.Drawing.Font("메이플스토리", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.timeLable.Location = new System.Drawing.Point(12, 29);
            this.timeLable.Name = "timeLable";
            this.timeLable.Size = new System.Drawing.Size(200, 30);
            this.timeLable.TabIndex = 0;
            this.timeLable.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.timeLable.Click += new System.EventHandler(this.label1_Click);
            // 
            // plusLeftLabel
            // 
            this.plusLeftLabel.AutoSize = true;
            this.plusLeftLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.plusLeftLabel.Location = new System.Drawing.Point(58, 105);
            this.plusLeftLabel.Name = "plusLeftLabel";
            this.plusLeftLabel.Size = new System.Drawing.Size(34, 34);
            this.plusLeftLabel.TabIndex = 1;
            this.plusLeftLabel.Text = "?";
            // 
            // plusRightLabel
            // 
            this.plusRightLabel.AutoSize = true;
            this.plusRightLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.plusRightLabel.Location = new System.Drawing.Point(197, 105);
            this.plusRightLabel.Name = "plusRightLabel";
            this.plusRightLabel.Size = new System.Drawing.Size(34, 34);
            this.plusRightLabel.TabIndex = 2;
            this.plusRightLabel.Text = "?";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(126, 105);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 34);
            this.label2.TabIndex = 3;
            this.label2.Text = "+";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(264, 105);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(34, 34);
            this.label3.TabIndex = 4;
            this.label3.Text = "=";
            // 
            // sum
            // 
            this.sum.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.sum.Location = new System.Drawing.Point(320, 109);
            this.sum.Name = "sum";
            this.sum.Size = new System.Drawing.Size(131, 25);
            this.sum.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("타이포_팩토리 M", 8.999999F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(80, 17);
            this.label1.TabIndex = 6;
            this.label1.Text = "남은 시간 : ";
            this.label1.Click += new System.EventHandler(this.label1_Click_1);
            // 
            // difference
            // 
            this.difference.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.difference.Location = new System.Drawing.Point(320, 161);
            this.difference.Name = "difference";
            this.difference.Size = new System.Drawing.Size(131, 25);
            this.difference.TabIndex = 3;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label4.Location = new System.Drawing.Point(264, 157);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(34, 34);
            this.label4.TabIndex = 10;
            this.label4.Text = "=";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label5.Location = new System.Drawing.Point(126, 157);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(34, 34);
            this.label5.TabIndex = 9;
            this.label5.Text = "-";
            // 
            // minusRightLabel
            // 
            this.minusRightLabel.AutoSize = true;
            this.minusRightLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.minusRightLabel.Location = new System.Drawing.Point(197, 157);
            this.minusRightLabel.Name = "minusRightLabel";
            this.minusRightLabel.Size = new System.Drawing.Size(34, 34);
            this.minusRightLabel.TabIndex = 8;
            this.minusRightLabel.Text = "?";
            // 
            // minusLeftLabel
            // 
            this.minusLeftLabel.AutoSize = true;
            this.minusLeftLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.minusLeftLabel.Location = new System.Drawing.Point(58, 157);
            this.minusLeftLabel.Name = "minusLeftLabel";
            this.minusLeftLabel.Size = new System.Drawing.Size(34, 34);
            this.minusLeftLabel.TabIndex = 7;
            this.minusLeftLabel.Text = "?";
            // 
            // product
            // 
            this.product.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.product.Location = new System.Drawing.Point(320, 211);
            this.product.Name = "product";
            this.product.Size = new System.Drawing.Size(131, 25);
            this.product.TabIndex = 4;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label8.Location = new System.Drawing.Point(264, 207);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(34, 34);
            this.label8.TabIndex = 15;
            this.label8.Text = "=";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label9.Location = new System.Drawing.Point(126, 207);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(31, 34);
            this.label9.TabIndex = 14;
            this.label9.Text = "x";
            // 
            // timesRightLabel
            // 
            this.timesRightLabel.AutoSize = true;
            this.timesRightLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.timesRightLabel.Location = new System.Drawing.Point(197, 207);
            this.timesRightLabel.Name = "timesRightLabel";
            this.timesRightLabel.Size = new System.Drawing.Size(34, 34);
            this.timesRightLabel.TabIndex = 13;
            this.timesRightLabel.Text = "?";
            // 
            // timesLeftLabel
            // 
            this.timesLeftLabel.AutoSize = true;
            this.timesLeftLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.timesLeftLabel.Location = new System.Drawing.Point(58, 207);
            this.timesLeftLabel.Name = "timesLeftLabel";
            this.timesLeftLabel.Size = new System.Drawing.Size(34, 34);
            this.timesLeftLabel.TabIndex = 12;
            this.timesLeftLabel.Text = "?";
            // 
            // quotient
            // 
            this.quotient.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.quotient.Location = new System.Drawing.Point(320, 259);
            this.quotient.Name = "quotient";
            this.quotient.Size = new System.Drawing.Size(131, 25);
            this.quotient.TabIndex = 5;
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label12.Location = new System.Drawing.Point(264, 255);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(34, 34);
            this.label12.TabIndex = 20;
            this.label12.Text = "=";
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label13.Location = new System.Drawing.Point(126, 255);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(31, 34);
            this.label13.TabIndex = 19;
            this.label13.Text = "/";
            // 
            // dividedRightLabel
            // 
            this.dividedRightLabel.AutoSize = true;
            this.dividedRightLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.dividedRightLabel.Location = new System.Drawing.Point(197, 255);
            this.dividedRightLabel.Name = "dividedRightLabel";
            this.dividedRightLabel.Size = new System.Drawing.Size(34, 34);
            this.dividedRightLabel.TabIndex = 18;
            this.dividedRightLabel.Text = "?";
            // 
            // dividedLeftLabel
            // 
            this.dividedLeftLabel.AutoSize = true;
            this.dividedLeftLabel.Font = new System.Drawing.Font("타이포_팩토리 M", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.dividedLeftLabel.Location = new System.Drawing.Point(58, 255);
            this.dividedLeftLabel.Name = "dividedLeftLabel";
            this.dividedLeftLabel.Size = new System.Drawing.Size(34, 34);
            this.dividedLeftLabel.TabIndex = 17;
            this.dividedLeftLabel.Text = "?";
            // 
            // startButton
            // 
            this.startButton.AutoSize = true;
            this.startButton.Font = new System.Drawing.Font("타이포_팩토리 M", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.startButton.Location = new System.Drawing.Point(320, 26);
            this.startButton.Name = "startButton";
            this.startButton.Size = new System.Drawing.Size(131, 33);
            this.startButton.TabIndex = 1;
            this.startButton.Text = "시작!";
            this.startButton.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(482, 353);
            this.Controls.Add(this.startButton);
            this.Controls.Add(this.quotient);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.dividedRightLabel);
            this.Controls.Add(this.dividedLeftLabel);
            this.Controls.Add(this.product);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.timesRightLabel);
            this.Controls.Add(this.timesLeftLabel);
            this.Controls.Add(this.difference);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.minusRightLabel);
            this.Controls.Add(this.minusLeftLabel);
            this.Controls.Add(this.timeLable);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.sum);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.plusRightLabel);
            this.Controls.Add(this.plusLeftLabel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.Text = "너의 순발력은!";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.sum)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.difference)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.product)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.quotient)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label timeLable;
        private System.Windows.Forms.Label plusLeftLabel;
        private System.Windows.Forms.Label plusRightLabel;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.NumericUpDown sum;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.NumericUpDown difference;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label minusRightLabel;
        private System.Windows.Forms.Label minusLeftLabel;
        private System.Windows.Forms.NumericUpDown product;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label timesRightLabel;
        private System.Windows.Forms.Label timesLeftLabel;
        private System.Windows.Forms.NumericUpDown quotient;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label dividedRightLabel;
        private System.Windows.Forms.Label dividedLeftLabel;
        private System.Windows.Forms.Button startButton;
    }
}

