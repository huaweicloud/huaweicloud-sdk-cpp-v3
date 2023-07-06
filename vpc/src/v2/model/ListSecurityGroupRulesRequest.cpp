

#include "huaweicloud/vpc/v2/model/ListSecurityGroupRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupRulesRequest::ListSecurityGroupRulesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
}

ListSecurityGroupRulesRequest::~ListSecurityGroupRulesRequest() = default;

void ListSecurityGroupRulesRequest::validate()
{
}

web::json::value ListSecurityGroupRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }

    return val;
}

bool ListSecurityGroupRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_ip_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_ip_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteIpPrefix(refVal);
        }
    }
    return ok;
}

std::string ListSecurityGroupRulesRequest::getMarker() const
{
    return marker_;
}

void ListSecurityGroupRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecurityGroupRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecurityGroupRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListSecurityGroupRulesRequest::getLimit() const
{
    return limit_;
}

void ListSecurityGroupRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecurityGroupRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecurityGroupRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSecurityGroupRulesRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ListSecurityGroupRulesRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ListSecurityGroupRulesRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ListSecurityGroupRulesRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ListSecurityGroupRulesRequest::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void ListSecurityGroupRulesRequest::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool ListSecurityGroupRulesRequest::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void ListSecurityGroupRulesRequest::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

}
}
}
}
}


