

#include "huaweicloud/organizations/v1/model/ListOrganizationalUnitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListOrganizationalUnitsRequest::ListOrganizationalUnitsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListOrganizationalUnitsRequest::~ListOrganizationalUnitsRequest() = default;

void ListOrganizationalUnitsRequest::validate()
{
}

web::json::value ListOrganizationalUnitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListOrganizationalUnitsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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


std::string ListOrganizationalUnitsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListOrganizationalUnitsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListOrganizationalUnitsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListOrganizationalUnitsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListOrganizationalUnitsRequest::getParentId() const
{
    return parentId_;
}

void ListOrganizationalUnitsRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListOrganizationalUnitsRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListOrganizationalUnitsRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t ListOrganizationalUnitsRequest::getLimit() const
{
    return limit_;
}

void ListOrganizationalUnitsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOrganizationalUnitsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOrganizationalUnitsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOrganizationalUnitsRequest::getMarker() const
{
    return marker_;
}

void ListOrganizationalUnitsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListOrganizationalUnitsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListOrganizationalUnitsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


