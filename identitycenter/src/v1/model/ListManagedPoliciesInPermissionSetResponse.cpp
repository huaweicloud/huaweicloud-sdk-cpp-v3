

#include "huaweicloud/identitycenter/v1/model/ListManagedPoliciesInPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListManagedPoliciesInPermissionSetResponse::ListManagedPoliciesInPermissionSetResponse()
{
    attachedManagedPoliciesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListManagedPoliciesInPermissionSetResponse::~ListManagedPoliciesInPermissionSetResponse() = default;

void ListManagedPoliciesInPermissionSetResponse::validate()
{
}

web::json::value ListManagedPoliciesInPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachedManagedPoliciesIsSet_) {
        val[utility::conversions::to_string_t("attached_managed_policies")] = ModelBase::toJson(attachedManagedPolicies_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListManagedPoliciesInPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attached_managed_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attached_managed_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachedManagedPolicyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachedManagedPolicies(refVal);
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


std::vector<AttachedManagedPolicyDto>& ListManagedPoliciesInPermissionSetResponse::getAttachedManagedPolicies()
{
    return attachedManagedPolicies_;
}

void ListManagedPoliciesInPermissionSetResponse::setAttachedManagedPolicies(const std::vector<AttachedManagedPolicyDto>& value)
{
    attachedManagedPolicies_ = value;
    attachedManagedPoliciesIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetResponse::attachedManagedPoliciesIsSet() const
{
    return attachedManagedPoliciesIsSet_;
}

void ListManagedPoliciesInPermissionSetResponse::unsetattachedManagedPolicies()
{
    attachedManagedPoliciesIsSet_ = false;
}

PageInfoDto ListManagedPoliciesInPermissionSetResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListManagedPoliciesInPermissionSetResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListManagedPoliciesInPermissionSetResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListManagedPoliciesInPermissionSetResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


