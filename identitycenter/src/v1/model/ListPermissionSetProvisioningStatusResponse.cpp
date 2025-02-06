

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetProvisioningStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetProvisioningStatusResponse::ListPermissionSetProvisioningStatusResponse()
{
    permissionSetsProvisioningStatusIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListPermissionSetProvisioningStatusResponse::~ListPermissionSetProvisioningStatusResponse() = default;

void ListPermissionSetProvisioningStatusResponse::validate()
{
}

web::json::value ListPermissionSetProvisioningStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetsProvisioningStatusIsSet_) {
        val[utility::conversions::to_string_t("permission_sets_provisioning_status")] = ModelBase::toJson(permissionSetsProvisioningStatus_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListPermissionSetProvisioningStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_sets_provisioning_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets_provisioning_status"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionSetProvisioningStatusMetadataDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetsProvisioningStatus(refVal);
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


std::vector<PermissionSetProvisioningStatusMetadataDto>& ListPermissionSetProvisioningStatusResponse::getPermissionSetsProvisioningStatus()
{
    return permissionSetsProvisioningStatus_;
}

void ListPermissionSetProvisioningStatusResponse::setPermissionSetsProvisioningStatus(const std::vector<PermissionSetProvisioningStatusMetadataDto>& value)
{
    permissionSetsProvisioningStatus_ = value;
    permissionSetsProvisioningStatusIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusResponse::permissionSetsProvisioningStatusIsSet() const
{
    return permissionSetsProvisioningStatusIsSet_;
}

void ListPermissionSetProvisioningStatusResponse::unsetpermissionSetsProvisioningStatus()
{
    permissionSetsProvisioningStatusIsSet_ = false;
}

PageInfoDto ListPermissionSetProvisioningStatusResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListPermissionSetProvisioningStatusResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListPermissionSetProvisioningStatusResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


