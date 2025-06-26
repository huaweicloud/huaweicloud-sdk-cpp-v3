

#include "huaweicloud/smn/v2/model/StatisticsDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




StatisticsDetail::StatisticsDetail()
{
    countIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

StatisticsDetail::~StatisticsDetail() = default;

void StatisticsDetail::validate()
{
}

web::json::value StatisticsDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool StatisticsDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            CountDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


CountDetail StatisticsDetail::getCount() const
{
    return count_;
}

void StatisticsDetail::setCount(const CountDetail& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool StatisticsDetail::countIsSet() const
{
    return countIsSet_;
}

void StatisticsDetail::unsetcount()
{
    countIsSet_ = false;
}

std::string StatisticsDetail::getStartTime() const
{
    return startTime_;
}

void StatisticsDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StatisticsDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StatisticsDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


