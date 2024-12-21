
class GrowLine
{

    enum class FeedModes
    {
        ByTime,
        ByVolume
    }

    private : int position;
    float lastFeedAmount;
    float feedValue;

public:
    int getPosition() const
    {
        return position;
    }

    // position, frames collection, feed mode, last feed amount, feed value
}