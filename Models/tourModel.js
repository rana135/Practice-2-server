const mongoose = require('mongoose');

const TourSchema = mongoose.Schema({
    name: {
        type: String,
        required: true,
        unique: true,
        trim: true
    },
    price: {
        type: Number,
        required: true
    },
    description: {
        type: String,
        max: 100
    },
    subscription: {
        type: String,
        default: 'Free',
        enum: ['Free', 'Premium']
    },
    viewCount: {
        type: Number,
        default: 0
    }
})

module.exports = TourModel = mongoose.model("Tour", TourSchema)
