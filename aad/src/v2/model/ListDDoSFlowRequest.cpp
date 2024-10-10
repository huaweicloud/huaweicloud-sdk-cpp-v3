

#include "huaweicloud/aad/v2/model/ListDDoSFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSFlowRequest::ListDDoSFlowRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListDDoSFlowRequest::~ListDDoSFlowRequest() = default;

void ListDDoSFlowRequest::validate()
{
}

web::json::value ListDDoSFlowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListDDoSFlowRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ListDDoSFlowRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDDoSFlowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDDoSFlowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDDoSFlowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDDoSFlowRequest::getIp() const
{
    return ip_;
}

void ListDDoSFlowRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDDoSFlowRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDDoSFlowRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListDDoSFlowRequest::getType() const
{
    return type_;
}

void ListDDoSFlowRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDDoSFlowRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListDDoSFlowRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListDDoSFlowRequest::getStartTime() const
{
    return startTime_;
}

void ListDDoSFlowRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDDoSFlowRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDDoSFlowRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDDoSFlowRequest::getEndTime() const
{
    return endTime_;
}

void ListDDoSFlowRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDDoSFlowRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDDoSFlowRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


