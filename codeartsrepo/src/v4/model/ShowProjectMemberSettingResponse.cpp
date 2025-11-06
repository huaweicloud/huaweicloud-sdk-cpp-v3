

#include "huaweicloud/codeartsrepo/v4/model/ShowProjectMemberSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowProjectMemberSettingResponse::ShowProjectMemberSettingResponse()
{
    productId_ = "";
    productIdIsSet_ = false;
    syncEnabled_ = false;
    syncEnabledIsSet_ = false;
    syncAllRoleEnabled_ = false;
    syncAllRoleEnabledIsSet_ = false;
    roleSyncIsSet_ = false;
}

ShowProjectMemberSettingResponse::~ShowProjectMemberSettingResponse() = default;

void ShowProjectMemberSettingResponse::validate()
{
}

web::json::value ShowProjectMemberSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(syncEnabledIsSet_) {
        val[utility::conversions::to_string_t("sync_enabled")] = ModelBase::toJson(syncEnabled_);
    }
    if(syncAllRoleEnabledIsSet_) {
        val[utility::conversions::to_string_t("sync_all_role_enabled")] = ModelBase::toJson(syncAllRoleEnabled_);
    }
    if(roleSyncIsSet_) {
        val[utility::conversions::to_string_t("role_sync")] = ModelBase::toJson(roleSync_);
    }

    return val;
}
bool ShowProjectMemberSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync_all_role_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_all_role_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncAllRoleEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_sync"));
        if(!fieldValue.is_null())
        {
            std::vector<RoleSyncDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleSync(refVal);
        }
    }
    return ok;
}


std::string ShowProjectMemberSettingResponse::getProductId() const
{
    return productId_;
}

void ShowProjectMemberSettingResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowProjectMemberSettingResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowProjectMemberSettingResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

bool ShowProjectMemberSettingResponse::isSyncEnabled() const
{
    return syncEnabled_;
}

void ShowProjectMemberSettingResponse::setSyncEnabled(bool value)
{
    syncEnabled_ = value;
    syncEnabledIsSet_ = true;
}

bool ShowProjectMemberSettingResponse::syncEnabledIsSet() const
{
    return syncEnabledIsSet_;
}

void ShowProjectMemberSettingResponse::unsetsyncEnabled()
{
    syncEnabledIsSet_ = false;
}

bool ShowProjectMemberSettingResponse::isSyncAllRoleEnabled() const
{
    return syncAllRoleEnabled_;
}

void ShowProjectMemberSettingResponse::setSyncAllRoleEnabled(bool value)
{
    syncAllRoleEnabled_ = value;
    syncAllRoleEnabledIsSet_ = true;
}

bool ShowProjectMemberSettingResponse::syncAllRoleEnabledIsSet() const
{
    return syncAllRoleEnabledIsSet_;
}

void ShowProjectMemberSettingResponse::unsetsyncAllRoleEnabled()
{
    syncAllRoleEnabledIsSet_ = false;
}

std::vector<RoleSyncDto>& ShowProjectMemberSettingResponse::getRoleSync()
{
    return roleSync_;
}

void ShowProjectMemberSettingResponse::setRoleSync(const std::vector<RoleSyncDto>& value)
{
    roleSync_ = value;
    roleSyncIsSet_ = true;
}

bool ShowProjectMemberSettingResponse::roleSyncIsSet() const
{
    return roleSyncIsSet_;
}

void ShowProjectMemberSettingResponse::unsetroleSync()
{
    roleSyncIsSet_ = false;
}

}
}
}
}
}


