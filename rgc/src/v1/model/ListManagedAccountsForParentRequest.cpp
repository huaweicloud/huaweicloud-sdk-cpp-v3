

#include "huaweicloud/rgc/v1/model/ListManagedAccountsForParentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListManagedAccountsForParentRequest::ListManagedAccountsForParentRequest()
{
    managedOrganizationalUnitId_ = "";
    managedOrganizationalUnitIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListManagedAccountsForParentRequest::~ListManagedAccountsForParentRequest() = default;

void ListManagedAccountsForParentRequest::validate()
{
}

web::json::value ListManagedAccountsForParentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("managed_organizational_unit_id")] = ModelBase::toJson(managedOrganizationalUnitId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListManagedAccountsForParentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedOrganizationalUnitId(refVal);
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


std::string ListManagedAccountsForParentRequest::getManagedOrganizationalUnitId() const
{
    return managedOrganizationalUnitId_;
}

void ListManagedAccountsForParentRequest::setManagedOrganizationalUnitId(const std::string& value)
{
    managedOrganizationalUnitId_ = value;
    managedOrganizationalUnitIdIsSet_ = true;
}

bool ListManagedAccountsForParentRequest::managedOrganizationalUnitIdIsSet() const
{
    return managedOrganizationalUnitIdIsSet_;
}

void ListManagedAccountsForParentRequest::unsetmanagedOrganizationalUnitId()
{
    managedOrganizationalUnitIdIsSet_ = false;
}

int32_t ListManagedAccountsForParentRequest::getLimit() const
{
    return limit_;
}

void ListManagedAccountsForParentRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListManagedAccountsForParentRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListManagedAccountsForParentRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListManagedAccountsForParentRequest::getMarker() const
{
    return marker_;
}

void ListManagedAccountsForParentRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListManagedAccountsForParentRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListManagedAccountsForParentRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


