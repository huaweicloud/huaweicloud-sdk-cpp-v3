

#include "huaweicloud/ram/v1/model/ListPermissionVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListPermissionVersionsResponse::ListPermissionVersionsResponse()
{
    permissionsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPermissionVersionsResponse::~ListPermissionVersionsResponse() = default;

void ListPermissionVersionsResponse::validate()
{
}

web::json::value ListPermissionVersionsResponse::toJson() const
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
bool ListPermissionVersionsResponse::fromJson(const web::json::value& val)
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


std::vector<PermissionSummary>& ListPermissionVersionsResponse::getPermissions()
{
    return permissions_;
}

void ListPermissionVersionsResponse::setPermissions(const std::vector<PermissionSummary>& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool ListPermissionVersionsResponse::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void ListPermissionVersionsResponse::unsetpermissions()
{
    permissionsIsSet_ = false;
}

PageInfo ListPermissionVersionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPermissionVersionsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPermissionVersionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPermissionVersionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


