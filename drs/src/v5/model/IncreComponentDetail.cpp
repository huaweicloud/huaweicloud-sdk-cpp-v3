

#include "huaweicloud/drs/v5/model/IncreComponentDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




IncreComponentDetail::IncreComponentDetail()
{
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    startPoint_ = "";
    startPointIsSet_ = false;
    currentPoint_ = "";
    currentPointIsSet_ = false;
    resolutionTime_ = "";
    resolutionTimeIsSet_ = false;
    delay_ = "";
    delayIsSet_ = false;
}

IncreComponentDetail::~IncreComponentDetail() = default;

void IncreComponentDetail::validate()
{
}

web::json::value IncreComponentDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(startPointIsSet_) {
        val[utility::conversions::to_string_t("start_point")] = ModelBase::toJson(startPoint_);
    }
    if(currentPointIsSet_) {
        val[utility::conversions::to_string_t("current_point")] = ModelBase::toJson(currentPoint_);
    }
    if(resolutionTimeIsSet_) {
        val[utility::conversions::to_string_t("resolution_time")] = ModelBase::toJson(resolutionTime_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool IncreComponentDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionTime(refVal);
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
    return ok;
}


std::string IncreComponentDetail::getType() const
{
    return type_;
}

void IncreComponentDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IncreComponentDetail::typeIsSet() const
{
    return typeIsSet_;
}

void IncreComponentDetail::unsettype()
{
    typeIsSet_ = false;
}

std::string IncreComponentDetail::getStatus() const
{
    return status_;
}

void IncreComponentDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IncreComponentDetail::statusIsSet() const
{
    return statusIsSet_;
}

void IncreComponentDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string IncreComponentDetail::getStartTime() const
{
    return startTime_;
}

void IncreComponentDetail::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool IncreComponentDetail::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void IncreComponentDetail::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string IncreComponentDetail::getStartPoint() const
{
    return startPoint_;
}

void IncreComponentDetail::setStartPoint(const std::string& value)
{
    startPoint_ = value;
    startPointIsSet_ = true;
}

bool IncreComponentDetail::startPointIsSet() const
{
    return startPointIsSet_;
}

void IncreComponentDetail::unsetstartPoint()
{
    startPointIsSet_ = false;
}

std::string IncreComponentDetail::getCurrentPoint() const
{
    return currentPoint_;
}

void IncreComponentDetail::setCurrentPoint(const std::string& value)
{
    currentPoint_ = value;
    currentPointIsSet_ = true;
}

bool IncreComponentDetail::currentPointIsSet() const
{
    return currentPointIsSet_;
}

void IncreComponentDetail::unsetcurrentPoint()
{
    currentPointIsSet_ = false;
}

std::string IncreComponentDetail::getResolutionTime() const
{
    return resolutionTime_;
}

void IncreComponentDetail::setResolutionTime(const std::string& value)
{
    resolutionTime_ = value;
    resolutionTimeIsSet_ = true;
}

bool IncreComponentDetail::resolutionTimeIsSet() const
{
    return resolutionTimeIsSet_;
}

void IncreComponentDetail::unsetresolutionTime()
{
    resolutionTimeIsSet_ = false;
}

std::string IncreComponentDetail::getDelay() const
{
    return delay_;
}

void IncreComponentDetail::setDelay(const std::string& value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool IncreComponentDetail::delayIsSet() const
{
    return delayIsSet_;
}

void IncreComponentDetail::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


