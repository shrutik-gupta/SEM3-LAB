import java.awt.*;
import java.awt.event.*;
class AWTcalculator implements ActionListener{
    Frame f= new Frame();
    Label l1= new Label("Enter first number: ");
    Label l2= new Label("Enter second number: ");
    Label l3= new Label("Result: ");
    TextField t1= new TextField();
    TextField t2= new TextField();
    TextField t3= new TextField();
    Button b1= new Button("Add");
    Button b2= new Button("Subtract");
    Button b3= new Button("Multiply");
    Button b4= new Button("Divide");

    AWTcalculator(){

        l1.setBounds(90,60,150,100);
        l2.setBounds(90,120,150,100);
        l3.setBounds(90,180,150,100);
        f.add(l1); f.add(l2); f.add(l3);

        t1.setBounds(300,100,100,20);
        t2.setBounds(300,160,100,20);
        t3.setBounds(300,220,100,20);
        f.add(t1); f.add(t2); f.add(t3);

        b1.setBounds(120, 300, 70,30);
        b2.setBounds(200, 300, 70,30);
        b3.setBounds(280, 300, 70,30);
        b4.setBounds(360, 300, 70,30);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        f.add(b1);f.add(b2); f.add(b3); f.add(b4);

        f.setTitle("Calculator");
        f.setSize(600,600);
        f.setLayout(null);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e){
        int n1= Integer.parseInt(t1.getText());
        int n2= Integer.parseInt(t2.getText());

        if(e.getSource()==b1){
            t3.setText(String.valueOf(n1+n2));
        }
        else if(e.getSource()==b2){
            t3.setText(String.valueOf(n1-n2));
        }
        if(e.getSource()==b3){
            t3.setText(String.valueOf(n1*n2));
        }
        if(e.getSource()==b4){
            t3.setText(String.valueOf(n1/n2));
        }
    }
    public static void main(String[] args) {
        AWTcalculator f= new AWTcalculator();
    }
}
