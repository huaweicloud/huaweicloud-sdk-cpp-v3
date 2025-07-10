

#include "huaweicloud/rgc/v1/model/ListManagedOrganizationalUnitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListManagedOrganizationalUnitsResponse::ListManagedOrganizationalUnitsResponse()
{
    managedOrganizationalUnitsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListManagedOrganizationalUnitsResponse::~ListManagedOrganizationalUnitsResponse() = default;

void ListManagedOrganizationalUnitsResponse::validate()
{
}

web::json::value ListManagedOrganizationalUnitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedOrganizationalUnitsIsSet_) {
        val[utility::conversions::to_string_t("managed_organizational_units")] = ModelBase::toJson(managedOrganizationalUnits_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListManagedOrganizationalUnitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_organizational_units"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_organizational_units"));
        if(!fieldValue.is_null())
        {
            std::vector<ManagedOrganizationalUnit> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedOrganizationalUnits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ManagedOrganizationalUnit>& ListManagedOrganizationalUnitsResponse::getManagedOrganizationalUnits()
{
    return managedOrganizationalUnits_;
}

void ListManagedOrganizationalUnitsResponse::setManagedOrganizationalUnits(const std::vector<ManagedOrganizationalUnit>& value)
{
    managedOrganizationalUnits_ = value;
    managedOrganizationalUnitsIsSet_ = true;
}

bool ListManagedOrganizationalUnitsResponse::managedOrganizationalUnitsIsSet() const
{
    return managedOrganizationalUnitsIsSet_;
}

void ListManagedOrganizationalUnitsResponse::unsetmanagedOrganizationalUnits()
{
    managedOrganizationalUnitsIsSet_ = false;
}

PageInfoDto ListManagedOrganizationalUnitsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListManagedOrganizationalUnitsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListManagedOrganizationalUnitsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListManagedOrganizationalUnitsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


