

#include "huaweicloud/rgc/v1/model/ShowLandingZoneIdentityCenterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowLandingZoneIdentityCenterResponse::ShowLandingZoneIdentityCenterResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userPortalUrl_ = "";
    userPortalUrlIsSet_ = false;
    permissionSetsIsSet_ = false;
    groupsIsSet_ = false;
}

ShowLandingZoneIdentityCenterResponse::~ShowLandingZoneIdentityCenterResponse() = default;

void ShowLandingZoneIdentityCenterResponse::validate()
{
}

web::json::value ShowLandingZoneIdentityCenterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userPortalUrlIsSet_) {
        val[utility::conversions::to_string_t("user_portal_url")] = ModelBase::toJson(userPortalUrl_);
    }
    if(permissionSetsIsSet_) {
        val[utility::conversions::to_string_t("permission_sets")] = ModelBase::toJson(permissionSets_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }

    return val;
}
bool ShowLandingZoneIdentityCenterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_portal_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_portal_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPortalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<PermissionSet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<IdentityCenterGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    return ok;
}


std::string ShowLandingZoneIdentityCenterResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ShowLandingZoneIdentityCenterResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ShowLandingZoneIdentityCenterResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ShowLandingZoneIdentityCenterResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ShowLandingZoneIdentityCenterResponse::getUserPortalUrl() const
{
    return userPortalUrl_;
}

void ShowLandingZoneIdentityCenterResponse::setUserPortalUrl(const std::string& value)
{
    userPortalUrl_ = value;
    userPortalUrlIsSet_ = true;
}

bool ShowLandingZoneIdentityCenterResponse::userPortalUrlIsSet() const
{
    return userPortalUrlIsSet_;
}

void ShowLandingZoneIdentityCenterResponse::unsetuserPortalUrl()
{
    userPortalUrlIsSet_ = false;
}

std::vector<PermissionSet>& ShowLandingZoneIdentityCenterResponse::getPermissionSets()
{
    return permissionSets_;
}

void ShowLandingZoneIdentityCenterResponse::setPermissionSets(const std::vector<PermissionSet>& value)
{
    permissionSets_ = value;
    permissionSetsIsSet_ = true;
}

bool ShowLandingZoneIdentityCenterResponse::permissionSetsIsSet() const
{
    return permissionSetsIsSet_;
}

void ShowLandingZoneIdentityCenterResponse::unsetpermissionSets()
{
    permissionSetsIsSet_ = false;
}

std::vector<IdentityCenterGroup>& ShowLandingZoneIdentityCenterResponse::getGroups()
{
    return groups_;
}

void ShowLandingZoneIdentityCenterResponse::setGroups(const std::vector<IdentityCenterGroup>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool ShowLandingZoneIdentityCenterResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void ShowLandingZoneIdentityCenterResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

}
}
}
}
}


