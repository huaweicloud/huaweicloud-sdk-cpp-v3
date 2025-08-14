

#include "huaweicloud/identitycenter/v1/model/ListCatalogApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListCatalogApplicationsRequest::ListCatalogApplicationsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListCatalogApplicationsRequest::~ListCatalogApplicationsRequest() = default;

void ListCatalogApplicationsRequest::validate()
{
}

web::json::value ListCatalogApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListCatalogApplicationsRequest::fromJson(const web::json::value& val)
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


std::string ListCatalogApplicationsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListCatalogApplicationsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListCatalogApplicationsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListCatalogApplicationsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListCatalogApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListCatalogApplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCatalogApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCatalogApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCatalogApplicationsRequest::getMarker() const
{
    return marker_;
}

void ListCatalogApplicationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListCatalogApplicationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListCatalogApplicationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


