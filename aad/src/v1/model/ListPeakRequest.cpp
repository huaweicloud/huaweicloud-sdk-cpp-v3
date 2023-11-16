

#include "huaweicloud/aad/v1/model/ListPeakRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListPeakRequest::ListPeakRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListPeakRequest::~ListPeakRequest() = default;

void ListPeakRequest::validate()
{
}

web::json::value ListPeakRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListPeakRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string ListPeakRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPeakRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPeakRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPeakRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPeakRequest::getIp() const
{
    return ip_;
}

void ListPeakRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListPeakRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListPeakRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListPeakRequest::getStartTime() const
{
    return startTime_;
}

void ListPeakRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPeakRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPeakRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListPeakRequest::getEndTime() const
{
    return endTime_;
}

void ListPeakRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPeakRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPeakRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


