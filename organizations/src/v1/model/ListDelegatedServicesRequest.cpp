

#include "huaweicloud/organizations/v1/model/ListDelegatedServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDelegatedServicesRequest::ListDelegatedServicesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListDelegatedServicesRequest::~ListDelegatedServicesRequest() = default;

void ListDelegatedServicesRequest::validate()
{
}

web::json::value ListDelegatedServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListDelegatedServicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListDelegatedServicesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListDelegatedServicesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListDelegatedServicesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListDelegatedServicesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListDelegatedServicesRequest::getAccountId() const
{
    return accountId_;
}

void ListDelegatedServicesRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListDelegatedServicesRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListDelegatedServicesRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

int32_t ListDelegatedServicesRequest::getLimit() const
{
    return limit_;
}

void ListDelegatedServicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDelegatedServicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDelegatedServicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDelegatedServicesRequest::getMarker() const
{
    return marker_;
}

void ListDelegatedServicesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDelegatedServicesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDelegatedServicesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


