

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetsProvisionedToAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetsProvisionedToAccountResponse::ListPermissionSetsProvisionedToAccountResponse()
{
    permissionSetsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPermissionSetsProvisionedToAccountResponse::~ListPermissionSetsProvisionedToAccountResponse() = default;

void ListPermissionSetsProvisionedToAccountResponse::validate()
{
}

web::json::value ListPermissionSetsProvisionedToAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetsIsSet_) {
        val[utility::conversions::to_string_t("permission_sets")] = ModelBase::toJson(permissionSets_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListPermissionSetsProvisionedToAccountResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSets(refVal);
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


std::vector<std::string>& ListPermissionSetsProvisionedToAccountResponse::getPermissionSets()
{
    return permissionSets_;
}

void ListPermissionSetsProvisionedToAccountResponse::setPermissionSets(const std::vector<std::string>& value)
{
    permissionSets_ = value;
    permissionSetsIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountResponse::permissionSetsIsSet() const
{
    return permissionSetsIsSet_;
}

void ListPermissionSetsProvisionedToAccountResponse::unsetpermissionSets()
{
    permissionSetsIsSet_ = false;
}

PageInfoDto ListPermissionSetsProvisionedToAccountResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPermissionSetsProvisionedToAccountResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPermissionSetsProvisionedToAccountResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


