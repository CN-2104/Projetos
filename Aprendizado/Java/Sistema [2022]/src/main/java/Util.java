/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 06470200176
 */
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Util {

    private static final String url = "jdbc:mysql://databases.cxt7a2qfzmjp.us-east-1.rds.amazonaws.com:3306/base";
    private static final String user = "root";
    private static final String password = "Root123#";

// JDBC for opening and managing connections
    private static Connection con;
     

    public Connection getConnection() {

        try {
 
            con = DriverManager.getConnection(url, user, password);

        } catch (SQLException sqlEx) {
            sqlEx.printStackTrace();

        }

        return con;

    }

}
