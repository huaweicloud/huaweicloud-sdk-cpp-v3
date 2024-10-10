

#include "huaweicloud/aad/v2/model/ListDDoSConnectionNumberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSConnectionNumberRequest::ListDDoSConnectionNumberRequest()
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

ListDDoSConnectionNumberRequest::~ListDDoSConnectionNumberRequest() = default;

void ListDDoSConnectionNumberRequest::validate()
{
}

web::json::value ListDDoSConnectionNumberRequest::toJson() const
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
bool ListDDoSConnectionNumberRequest::fromJson(const web::json::value& val)
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


std::string ListDDoSConnectionNumberRequest::getStartTime() const
{
    return startTime_;
}

void ListDDoSConnectionNumberRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDDoSConnectionNumberRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDDoSConnectionNumberRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDDoSConnectionNumberRequest::getEndTime() const
{
    return endTime_;
}

void ListDDoSConnectionNumberRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDDoSConnectionNumberRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDDoSConnectionNumberRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDDoSConnectionNumberRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDDoSConnectionNumberRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDDoSConnectionNumberRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDDoSConnectionNumberRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDDoSConnectionNumberRequest::getIp() const
{
    return ip_;
}

void ListDDoSConnectionNumberRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDDoSConnectionNumberRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDDoSConnectionNumberRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


