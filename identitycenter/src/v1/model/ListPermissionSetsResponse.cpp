

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetsResponse::ListPermissionSetsResponse()
{
    permissionSetsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPermissionSetsResponse::~ListPermissionSetsResponse() = default;

void ListPermissionSetsResponse::validate()
{
}

web::json::value ListPermissionSetsResponse::toJson() const
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
bool ListPermissionSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionSetDto> refVal;
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


std::vector<PermissionSetDto>& ListPermissionSetsResponse::getPermissionSets()
{
    return permissionSets_;
}

void ListPermissionSetsResponse::setPermissionSets(const std::vector<PermissionSetDto>& value)
{
    permissionSets_ = value;
    permissionSetsIsSet_ = true;
}

bool ListPermissionSetsResponse::permissionSetsIsSet() const
{
    return permissionSetsIsSet_;
}

void ListPermissionSetsResponse::unsetpermissionSets()
{
    permissionSetsIsSet_ = false;
}

PageInfoDto ListPermissionSetsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPermissionSetsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPermissionSetsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPermissionSetsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


