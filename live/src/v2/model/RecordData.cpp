

#include "huaweicloud/live/v2/model/RecordData.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




RecordData::RecordData()
{
    concurrentCount_ = 0;
    concurrentCountIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

RecordData::~RecordData() = default;

void RecordData::validate()
{
}

web::json::value RecordData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(concurrentCountIsSet_) {
        val[utility::conversions::to_string_t("concurrent_count")] = ModelBase::toJson(concurrentCount_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}

bool RecordData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("concurrent_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrent_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrentCount(refVal);
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

int32_t RecordData::getConcurrentCount() const
{
    return concurrentCount_;
}

void RecordData::setConcurrentCount(int32_t value)
{
    concurrentCount_ = value;
    concurrentCountIsSet_ = true;
}

bool RecordData::concurrentCountIsSet() const
{
    return concurrentCountIsSet_;
}

void RecordData::unsetconcurrentCount()
{
    concurrentCountIsSet_ = false;
}

std::string RecordData::getTime() const
{
    return time_;
}

void RecordData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool RecordData::timeIsSet() const
{
    return timeIsSet_;
}

void RecordData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


