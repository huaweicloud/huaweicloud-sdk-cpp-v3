

#include "huaweicloud/drs/v5/model/SpeedLimitInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SpeedLimitInfo::SpeedLimitInfo()
{
    begin_ = "";
    beginIsSet_ = false;
    end_ = "";
    endIsSet_ = false;
    speed_ = "";
    speedIsSet_ = false;
}

SpeedLimitInfo::~SpeedLimitInfo() = default;

void SpeedLimitInfo::validate()
{
}

web::json::value SpeedLimitInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginIsSet_) {
        val[utility::conversions::to_string_t("begin")] = ModelBase::toJson(begin_);
    }
    if(endIsSet_) {
        val[utility::conversions::to_string_t("end")] = ModelBase::toJson(end_);
    }
    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }

    return val;
}
bool SpeedLimitInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBegin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    return ok;
}


std::string SpeedLimitInfo::getBegin() const
{
    return begin_;
}

void SpeedLimitInfo::setBegin(const std::string& value)
{
    begin_ = value;
    beginIsSet_ = true;
}

bool SpeedLimitInfo::beginIsSet() const
{
    return beginIsSet_;
}

void SpeedLimitInfo::unsetbegin()
{
    beginIsSet_ = false;
}

std::string SpeedLimitInfo::getEnd() const
{
    return end_;
}

void SpeedLimitInfo::setEnd(const std::string& value)
{
    end_ = value;
    endIsSet_ = true;
}

bool SpeedLimitInfo::endIsSet() const
{
    return endIsSet_;
}

void SpeedLimitInfo::unsetend()
{
    endIsSet_ = false;
}

std::string SpeedLimitInfo::getSpeed() const
{
    return speed_;
}

void SpeedLimitInfo::setSpeed(const std::string& value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool SpeedLimitInfo::speedIsSet() const
{
    return speedIsSet_;
}

void SpeedLimitInfo::unsetspeed()
{
    speedIsSet_ = false;
}

}
}
}
}
}


