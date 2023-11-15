import javax.swing.*;
import java.awt.event.*;
public class SWINGstudentform implements ActionListener{
    JFrame f= new JFrame();
    JLabel l1= new JLabel("Name: ");
    JLabel l2= new JLabel("Gender: ");
    JLabel l3= new JLabel("Age: ");
    JLabel l4= new JLabel("Hobbies: ");
    JTextField t1= new JTextField();
    JTextField t2= new JTextField();
    String age[]={"17","18","19","20","21","22"};
    JComboBox cb= new JComboBox<>(age);
    JRadioButton rb1= new JRadioButton("Male");
    JRadioButton rb2= new JRadioButton("Female");
    JCheckBox chb1= new JCheckBox("Dancing");
    JCheckBox chb2= new JCheckBox("Singing");
    JButton b1= new JButton("Submit");
    JTextArea area = new JTextArea();

    SWINGstudentform(){
        l1.setBounds(20,20,80,30);
        t1.setBounds(100,20,150,30);
        f.add(l1);f.add(t1);
        l2.setBounds(20,100,100,30);
        rb1.setBounds(100,100,100,30); 
        rb2.setBounds(200,100,100,30); 
        f.add(l2);f.add(rb1);f.add(rb2);
        l3.setBounds(20,140,80,30);
        cb.setBounds(100,140,50,30); 
        f.add(l3); f.add(cb);
        l4.setBounds(20,180,100,30);
        chb1.setBounds(100,180,100,30); 
        chb2.setBounds(200,180,100,30); 
        f.add(l4); f.add(chb1); f.add(chb2);
        b1.setBounds(200,220,100,30); 
        f.add(b1);
        area.setBounds(60,260,400,250); 
        f.add(area);
        b1.addActionListener(this);
        f.setSize(600,600);
        f.setTitle("Student form");
        f.setLayout(null);
        f.setVisible(true);
        
    }

    public void actionPerformed(ActionEvent e){
        String name= t1.getText();
        String gender= rb1.isSelected()?"Male":rb2.isSelected()?"Female":"Not Disclosed";
        String age= cb.getItemAt(cb.getSelectedIndex()).toString();
        String hobby= "";
        if(chb1.isSelected()){
            hobby= "Dancing";
        }
        if(chb2.isSelected()){
            hobby= "Singing";
        }
        area.setText("Name: "+name+"\ngender: "+gender+"\nage: "+age+"\nhobby: "+hobby+"\n");
    }
    public static void main(String[] args) {
        SWINGstudentform f= new SWINGstudentform();
    }
}
