

#include "huaweicloud/aad/v2/model/ListDDoSBlackHoleEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSBlackHoleEventRequest::ListDDoSBlackHoleEventRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ListDDoSBlackHoleEventRequest::~ListDDoSBlackHoleEventRequest() = default;

void ListDDoSBlackHoleEventRequest::validate()
{
}

web::json::value ListDDoSBlackHoleEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ListDDoSBlackHoleEventRequest::fromJson(const web::json::value& val)
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


std::string ListDDoSBlackHoleEventRequest::getStartTime() const
{
    return startTime_;
}

void ListDDoSBlackHoleEventRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDDoSBlackHoleEventRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDDoSBlackHoleEventRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDDoSBlackHoleEventRequest::getEndTime() const
{
    return endTime_;
}

void ListDDoSBlackHoleEventRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDDoSBlackHoleEventRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDDoSBlackHoleEventRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDDoSBlackHoleEventRequest::getIp() const
{
    return ip_;
}

void ListDDoSBlackHoleEventRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDDoSBlackHoleEventRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDDoSBlackHoleEventRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


