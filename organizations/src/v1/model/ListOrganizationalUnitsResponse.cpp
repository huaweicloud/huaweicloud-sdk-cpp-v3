

#include "huaweicloud/organizations/v1/model/ListOrganizationalUnitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListOrganizationalUnitsResponse::ListOrganizationalUnitsResponse()
{
    organizationalUnitsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListOrganizationalUnitsResponse::~ListOrganizationalUnitsResponse() = default;

void ListOrganizationalUnitsResponse::validate()
{
}

web::json::value ListOrganizationalUnitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationalUnitsIsSet_) {
        val[utility::conversions::to_string_t("organizational_units")] = ModelBase::toJson(organizationalUnits_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListOrganizationalUnitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organizational_units"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organizational_units"));
        if(!fieldValue.is_null())
        {
            std::vector<OrganizationalUnitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationalUnits(refVal);
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


std::vector<OrganizationalUnitDto>& ListOrganizationalUnitsResponse::getOrganizationalUnits()
{
    return organizationalUnits_;
}

void ListOrganizationalUnitsResponse::setOrganizationalUnits(const std::vector<OrganizationalUnitDto>& value)
{
    organizationalUnits_ = value;
    organizationalUnitsIsSet_ = true;
}

bool ListOrganizationalUnitsResponse::organizationalUnitsIsSet() const
{
    return organizationalUnitsIsSet_;
}

void ListOrganizationalUnitsResponse::unsetorganizationalUnits()
{
    organizationalUnitsIsSet_ = false;
}

PageInfoDto ListOrganizationalUnitsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListOrganizationalUnitsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListOrganizationalUnitsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListOrganizationalUnitsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


