

#include "huaweicloud/identitycenter/v1/model/GetPermissionSetSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetPermissionSetSummaryResponse::GetPermissionSetSummaryResponse()
{
    permissionSets_ = 0L;
    permissionSetsIsSet_ = false;
    permissionSetsQuota_ = 0L;
    permissionSetsQuotaIsSet_ = false;
    permissionPolicyCountQuota_ = 0L;
    permissionPolicyCountQuotaIsSet_ = false;
    permissionPolicyQuota_ = 0L;
    permissionPolicyQuotaIsSet_ = false;
}

GetPermissionSetSummaryResponse::~GetPermissionSetSummaryResponse() = default;

void GetPermissionSetSummaryResponse::validate()
{
}

web::json::value GetPermissionSetSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetsIsSet_) {
        val[utility::conversions::to_string_t("permission_sets")] = ModelBase::toJson(permissionSets_);
    }
    if(permissionSetsQuotaIsSet_) {
        val[utility::conversions::to_string_t("permission_sets_quota")] = ModelBase::toJson(permissionSetsQuota_);
    }
    if(permissionPolicyCountQuotaIsSet_) {
        val[utility::conversions::to_string_t("permission_policy_count_quota")] = ModelBase::toJson(permissionPolicyCountQuota_);
    }
    if(permissionPolicyQuotaIsSet_) {
        val[utility::conversions::to_string_t("permission_policy_quota")] = ModelBase::toJson(permissionPolicyQuota_);
    }

    return val;
}
bool GetPermissionSetSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_sets_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_policy_count_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_policy_count_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionPolicyCountQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_policy_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_policy_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionPolicyQuota(refVal);
        }
    }
    return ok;
}


int64_t GetPermissionSetSummaryResponse::getPermissionSets() const
{
    return permissionSets_;
}

void GetPermissionSetSummaryResponse::setPermissionSets(int64_t value)
{
    permissionSets_ = value;
    permissionSetsIsSet_ = true;
}

bool GetPermissionSetSummaryResponse::permissionSetsIsSet() const
{
    return permissionSetsIsSet_;
}

void GetPermissionSetSummaryResponse::unsetpermissionSets()
{
    permissionSetsIsSet_ = false;
}

int64_t GetPermissionSetSummaryResponse::getPermissionSetsQuota() const
{
    return permissionSetsQuota_;
}

void GetPermissionSetSummaryResponse::setPermissionSetsQuota(int64_t value)
{
    permissionSetsQuota_ = value;
    permissionSetsQuotaIsSet_ = true;
}

bool GetPermissionSetSummaryResponse::permissionSetsQuotaIsSet() const
{
    return permissionSetsQuotaIsSet_;
}

void GetPermissionSetSummaryResponse::unsetpermissionSetsQuota()
{
    permissionSetsQuotaIsSet_ = false;
}

int64_t GetPermissionSetSummaryResponse::getPermissionPolicyCountQuota() const
{
    return permissionPolicyCountQuota_;
}

void GetPermissionSetSummaryResponse::setPermissionPolicyCountQuota(int64_t value)
{
    permissionPolicyCountQuota_ = value;
    permissionPolicyCountQuotaIsSet_ = true;
}

bool GetPermissionSetSummaryResponse::permissionPolicyCountQuotaIsSet() const
{
    return permissionPolicyCountQuotaIsSet_;
}

void GetPermissionSetSummaryResponse::unsetpermissionPolicyCountQuota()
{
    permissionPolicyCountQuotaIsSet_ = false;
}

int64_t GetPermissionSetSummaryResponse::getPermissionPolicyQuota() const
{
    return permissionPolicyQuota_;
}

void GetPermissionSetSummaryResponse::setPermissionPolicyQuota(int64_t value)
{
    permissionPolicyQuota_ = value;
    permissionPolicyQuotaIsSet_ = true;
}

bool GetPermissionSetSummaryResponse::permissionPolicyQuotaIsSet() const
{
    return permissionPolicyQuotaIsSet_;
}

void GetPermissionSetSummaryResponse::unsetpermissionPolicyQuota()
{
    permissionPolicyQuotaIsSet_ = false;
}

}
}
}
}
}


