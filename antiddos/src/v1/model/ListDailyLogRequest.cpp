

#include "huaweicloud/antiddos/v1/model/ListDailyLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDailyLogRequest::ListDailyLogRequest()
{
    floatingIpId_ = "";
    floatingIpIdIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

ListDailyLogRequest::~ListDailyLogRequest() = default;

void ListDailyLogRequest::validate()
{
}

web::json::value ListDailyLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingIpIdIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_id")] = ModelBase::toJson(floatingIpId_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
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
bool ListDailyLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floating_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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


std::string ListDailyLogRequest::getFloatingIpId() const
{
    return floatingIpId_;
}

void ListDailyLogRequest::setFloatingIpId(const std::string& value)
{
    floatingIpId_ = value;
    floatingIpIdIsSet_ = true;
}

bool ListDailyLogRequest::floatingIpIdIsSet() const
{
    return floatingIpIdIsSet_;
}

void ListDailyLogRequest::unsetfloatingIpId()
{
    floatingIpIdIsSet_ = false;
}

std::string ListDailyLogRequest::getSortDir() const
{
    return sortDir_;
}

void ListDailyLogRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListDailyLogRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListDailyLogRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListDailyLogRequest::getLimit() const
{
    return limit_;
}

void ListDailyLogRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDailyLogRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDailyLogRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDailyLogRequest::getOffset() const
{
    return offset_;
}

void ListDailyLogRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDailyLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDailyLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDailyLogRequest::getIp() const
{
    return ip_;
}

void ListDailyLogRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListDailyLogRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListDailyLogRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


