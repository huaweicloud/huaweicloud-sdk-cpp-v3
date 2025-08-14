

#include "huaweicloud/identitycenter/v1/model/ListApplicationProvidersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationProvidersRequest::ListApplicationProvidersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListApplicationProvidersRequest::~ListApplicationProvidersRequest() = default;

void ListApplicationProvidersRequest::validate()
{
}

web::json::value ListApplicationProvidersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool ListApplicationProvidersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    return ok;
}


int32_t ListApplicationProvidersRequest::getLimit() const
{
    return limit_;
}

void ListApplicationProvidersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationProvidersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationProvidersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationProvidersRequest::getMarker() const
{
    return marker_;
}

void ListApplicationProvidersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationProvidersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationProvidersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListApplicationProvidersRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationProvidersRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationProvidersRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationProvidersRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


