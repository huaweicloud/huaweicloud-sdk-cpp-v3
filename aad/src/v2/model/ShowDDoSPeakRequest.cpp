

#include "huaweicloud/aad/v2/model/ShowDDoSPeakRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDDoSPeakRequest::ShowDDoSPeakRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ShowDDoSPeakRequest::~ShowDDoSPeakRequest() = default;

void ShowDDoSPeakRequest::validate()
{
}

web::json::value ShowDDoSPeakRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ShowDDoSPeakRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::string ShowDDoSPeakRequest::getStartTime() const
{
    return startTime_;
}

void ShowDDoSPeakRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowDDoSPeakRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowDDoSPeakRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowDDoSPeakRequest::getEndTime() const
{
    return endTime_;
}

void ShowDDoSPeakRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowDDoSPeakRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowDDoSPeakRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowDDoSPeakRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDDoSPeakRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDDoSPeakRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDDoSPeakRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDDoSPeakRequest::getIp() const
{
    return ip_;
}

void ShowDDoSPeakRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowDDoSPeakRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ShowDDoSPeakRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


