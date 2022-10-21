const service = require("../Services/tourService")



/* ----------------- Get All Tours ----------------- */
exports.getTours = async (req, res) => {
    try {
        const result = await service.getTours()
        res.status(200).json({
            status: 'Success',
            message: "Tours Info Find Successfully!",
            data: result
        })
    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }
}

/* ----------------- Get Single Tour ----------------- */
exports.getTour = async (req, res) => {
    const { id } = req.params

    try {
        const result = await service.getTour(id)
        res.status(200).json({
            status: 'Success',
            message: "Tour Info Find Successfully!",
            data: result
        })
    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }
}

/* ----------------- Post A Tour ----------------- */
exports.postTour = async (req, res) => {
    const data = req.body

    try {
        const result = await service.postTour(data)
        res.status(201).json({
            status: 'Success',
            message: "Tour Info added Successfully!",
            data: result
        })

    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }

}

/* ----------------- Update A Tour ----------------- */
exports.updateTour = async (req, res) => {
    const { id } = req.params
    const data = req.body
    try {
        const result = await service.updateTours({ id, data })
        res.status(201).json({
            status: 'Success',
            message: "Tour Info updated Successfully!",
            data: result
        })
    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }
}

/* ----------------- Get Trending Tours ----------------- */
exports.trendingTours = async (req, res) => {
    try {
        const result = await service.trendingTours()
        res.status(201).json({
            status: 'Success',
            message: "Trending Tour Info!",
            data: result
        })
    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }
}

/* ----------------- Get Cheapest Tours ----------------- */
exports.chepestTours = async (req, res) => {
    try {
        const result = await service.chepestTours()
        res.status(201).json({
            status: 'Success',
            message: "Cheapest Tour Info!",
            data: result
        })
    } catch (error) {
        res.status(500).json({
            status: 'Fail',
            error: error.message
        })
    }
}