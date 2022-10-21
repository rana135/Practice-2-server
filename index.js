const express = require('express');
const dotenv = require('dotenv');
const PORT = process.env.PORT || 5000

const tourRoute = require("./Routes/v1/tourRoute")

const app = express()
dotenv.config()
app.use(express.json())

// Database Connect
require('./Config/dbConnect')

// Routes
app.use("/api/v1", tourRoute)

// Helath Check
app.get("/", (req, res) => {
    res.send("Hello World")
})

app.listen(PORT, () => {
    console.log(`Server is listing on PORT:${PORT}`);
})
