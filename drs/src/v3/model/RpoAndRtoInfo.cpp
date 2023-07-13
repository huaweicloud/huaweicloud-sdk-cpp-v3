

#include "huaweicloud/drs/v3/model/RpoAndRtoInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




RpoAndRtoInfo::RpoAndRtoInfo()
{
    checkPoint_ = "";
    checkPointIsSet_ = false;
    delay_ = "";
    delayIsSet_ = false;
    gtidSet_ = "";
    gtidSetIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

RpoAndRtoInfo::~RpoAndRtoInfo() = default;

void RpoAndRtoInfo::validate()
{
}

web::json::value RpoAndRtoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkPointIsSet_) {
        val[utility::conversions::to_string_t("check_point")] = ModelBase::toJson(checkPoint_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(gtidSetIsSet_) {
        val[utility::conversions::to_string_t("gtid_set")] = ModelBase::toJson(gtidSet_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}

bool RpoAndRtoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gtid_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gtid_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGtidSet(refVal);
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

std::string RpoAndRtoInfo::getCheckPoint() const
{
    return checkPoint_;
}

void RpoAndRtoInfo::setCheckPoint(const std::string& value)
{
    checkPoint_ = value;
    checkPointIsSet_ = true;
}

bool RpoAndRtoInfo::checkPointIsSet() const
{
    return checkPointIsSet_;
}

void RpoAndRtoInfo::unsetcheckPoint()
{
    checkPointIsSet_ = false;
}

std::string RpoAndRtoInfo::getDelay() const
{
    return delay_;
}

void RpoAndRtoInfo::setDelay(const std::string& value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool RpoAndRtoInfo::delayIsSet() const
{
    return delayIsSet_;
}

void RpoAndRtoInfo::unsetdelay()
{
    delayIsSet_ = false;
}

std::string RpoAndRtoInfo::getGtidSet() const
{
    return gtidSet_;
}

void RpoAndRtoInfo::setGtidSet(const std::string& value)
{
    gtidSet_ = value;
    gtidSetIsSet_ = true;
}

bool RpoAndRtoInfo::gtidSetIsSet() const
{
    return gtidSetIsSet_;
}

void RpoAndRtoInfo::unsetgtidSet()
{
    gtidSetIsSet_ = false;
}

std::string RpoAndRtoInfo::getTime() const
{
    return time_;
}

void RpoAndRtoInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool RpoAndRtoInfo::timeIsSet() const
{
    return timeIsSet_;
}

void RpoAndRtoInfo::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


