const express=require('express');
const app=express();
const dotenv=require('dotenv');
const mongoose=require('mongoose');

//dotenv_file
dotenv.config();

//Connecting to Database
mongoose.connect(
    process.env.DB_CONNECT,
    { useNewUrlParser: true },
    // { useUnifiedTopology: true },
    ()=>console.log("Connected to DB")
);

//Import Routes
const authRoute= require('./routes/auth.js');

//Middlewares
app.use(express.json());
app.use('/api/user/',authRoute);



//Port_Number
const port =8001;

//Server Listening
app.listen(port,()=>console.log("Server is up and running"));

