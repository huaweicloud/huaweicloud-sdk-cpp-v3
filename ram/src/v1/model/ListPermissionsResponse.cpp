

#include "huaweicloud/ram/v1/model/ListPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListPermissionsResponse::ListPermissionsResponse()
{
    permissionsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPermissionsResponse::~ListPermissionsResponse() = default;

void ListPermissionsResponse::validate()
{
}

web::json::value ListPermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListPermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<PermissionSummary>& ListPermissionsResponse::getPermissions()
{
    return permissions_;
}

void ListPermissionsResponse::setPermissions(const std::vector<PermissionSummary>& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool ListPermissionsResponse::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void ListPermissionsResponse::unsetpermissions()
{
    permissionsIsSet_ = false;
}

PageInfo ListPermissionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPermissionsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPermissionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPermissionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


