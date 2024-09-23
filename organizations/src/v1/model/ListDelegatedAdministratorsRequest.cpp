

#include "huaweicloud/organizations/v1/model/ListDelegatedAdministratorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDelegatedAdministratorsRequest::ListDelegatedAdministratorsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    servicePrincipal_ = "";
    servicePrincipalIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListDelegatedAdministratorsRequest::~ListDelegatedAdministratorsRequest() = default;

void ListDelegatedAdministratorsRequest::validate()
{
}

web::json::value ListDelegatedAdministratorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(servicePrincipalIsSet_) {
        val[utility::conversions::to_string_t("service_principal")] = ModelBase::toJson(servicePrincipal_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListDelegatedAdministratorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("service_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServicePrincipal(refVal);
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


std::string ListDelegatedAdministratorsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListDelegatedAdministratorsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListDelegatedAdministratorsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListDelegatedAdministratorsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListDelegatedAdministratorsRequest::getServicePrincipal() const
{
    return servicePrincipal_;
}

void ListDelegatedAdministratorsRequest::setServicePrincipal(const std::string& value)
{
    servicePrincipal_ = value;
    servicePrincipalIsSet_ = true;
}

bool ListDelegatedAdministratorsRequest::servicePrincipalIsSet() const
{
    return servicePrincipalIsSet_;
}

void ListDelegatedAdministratorsRequest::unsetservicePrincipal()
{
    servicePrincipalIsSet_ = false;
}

int32_t ListDelegatedAdministratorsRequest::getLimit() const
{
    return limit_;
}

void ListDelegatedAdministratorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDelegatedAdministratorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDelegatedAdministratorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDelegatedAdministratorsRequest::getMarker() const
{
    return marker_;
}

void ListDelegatedAdministratorsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDelegatedAdministratorsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDelegatedAdministratorsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


