

#include "huaweicloud/antiddos/v1/model/ListDDosStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDDosStatusRequest::ListDDosStatusRequest()
{
    status_ = "";
    statusIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ListDDosStatusRequest::~ListDDosStatusRequest() = default;

void ListDDosStatusRequest::validate()
{
}

web::json::value ListDDosStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool ListDDosStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ListDDosStatusRequest::getStatus() const
{
    return status_;
}

void ListDDosStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDDosStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListDDosStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDDosStatusRequest::getLimit() const
{
    return limit_;
}

void ListDDosStatusRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDDosStatusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDDosStatusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDDosStatusRequest::getOffset() const
{
    return offset_;
}

void ListDDosStatusRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDDosStatusRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDDosStatusRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDDosStatusRequest::getIp() const
{
    return ip_;
}

void ListDDosStatusRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDDosStatusRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDDosStatusRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


