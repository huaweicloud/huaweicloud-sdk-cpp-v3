

#include "huaweicloud/live/v2/model/SnapshotData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




SnapshotData::SnapshotData()
{
    count_ = 0L;
    countIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

SnapshotData::~SnapshotData() = default;

void SnapshotData::validate()
{
}

web::json::value SnapshotData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool SnapshotData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


int64_t SnapshotData::getCount() const
{
    return count_;
}

void SnapshotData::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SnapshotData::countIsSet() const
{
    return countIsSet_;
}

void SnapshotData::unsetcount()
{
    countIsSet_ = false;
}

std::string SnapshotData::getTime() const
{
    return time_;
}

void SnapshotData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SnapshotData::timeIsSet() const
{
    return timeIsSet_;
}

void SnapshotData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


