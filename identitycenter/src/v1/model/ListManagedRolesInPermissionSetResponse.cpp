

#include "huaweicloud/identitycenter/v1/model/ListManagedRolesInPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListManagedRolesInPermissionSetResponse::ListManagedRolesInPermissionSetResponse()
{
    attachedManagedRolesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListManagedRolesInPermissionSetResponse::~ListManagedRolesInPermissionSetResponse() = default;

void ListManagedRolesInPermissionSetResponse::validate()
{
}

web::json::value ListManagedRolesInPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachedManagedRolesIsSet_) {
        val[utility::conversions::to_string_t("attached_managed_roles")] = ModelBase::toJson(attachedManagedRoles_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListManagedRolesInPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attached_managed_roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attached_managed_roles"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceAttachedManagedPolicyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachedManagedRoles(refVal);
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


std::vector<ResourceAttachedManagedPolicyDto>& ListManagedRolesInPermissionSetResponse::getAttachedManagedRoles()
{
    return attachedManagedRoles_;
}

void ListManagedRolesInPermissionSetResponse::setAttachedManagedRoles(const std::vector<ResourceAttachedManagedPolicyDto>& value)
{
    attachedManagedRoles_ = value;
    attachedManagedRolesIsSet_ = true;
}

bool ListManagedRolesInPermissionSetResponse::attachedManagedRolesIsSet() const
{
    return attachedManagedRolesIsSet_;
}

void ListManagedRolesInPermissionSetResponse::unsetattachedManagedRoles()
{
    attachedManagedRolesIsSet_ = false;
}

PageInfoDto ListManagedRolesInPermissionSetResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListManagedRolesInPermissionSetResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListManagedRolesInPermissionSetResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListManagedRolesInPermissionSetResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


