

#include "huaweicloud/codehub/v4/model/RepoSubscriptionEventDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




RepoSubscriptionEventDto::RepoSubscriptionEventDto()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    roleIdsIsSet_ = false;
    roleNamesIsSet_ = false;
}

RepoSubscriptionEventDto::~RepoSubscriptionEventDto() = default;

void RepoSubscriptionEventDto::validate()
{
}

web::json::value RepoSubscriptionEventDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(roleIdsIsSet_) {
        val[utility::conversions::to_string_t("role_ids")] = ModelBase::toJson(roleIds_);
    }
    if(roleNamesIsSet_) {
        val[utility::conversions::to_string_t("role_names")] = ModelBase::toJson(roleNames_);
    }

    return val;
}
bool RepoSubscriptionEventDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNames(refVal);
        }
    }
    return ok;
}


std::string RepoSubscriptionEventDto::getResourceType() const
{
    return resourceType_;
}

void RepoSubscriptionEventDto::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool RepoSubscriptionEventDto::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void RepoSubscriptionEventDto::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string RepoSubscriptionEventDto::getAction() const
{
    return action_;
}

void RepoSubscriptionEventDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool RepoSubscriptionEventDto::actionIsSet() const
{
    return actionIsSet_;
}

void RepoSubscriptionEventDto::unsetaction()
{
    actionIsSet_ = false;
}

bool RepoSubscriptionEventDto::isEnabled() const
{
    return enabled_;
}

void RepoSubscriptionEventDto::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool RepoSubscriptionEventDto::enabledIsSet() const
{
    return enabledIsSet_;
}

void RepoSubscriptionEventDto::unsetenabled()
{
    enabledIsSet_ = false;
}

std::vector<std::string>& RepoSubscriptionEventDto::getRoleIds()
{
    return roleIds_;
}

void RepoSubscriptionEventDto::setRoleIds(const std::vector<std::string>& value)
{
    roleIds_ = value;
    roleIdsIsSet_ = true;
}

bool RepoSubscriptionEventDto::roleIdsIsSet() const
{
    return roleIdsIsSet_;
}

void RepoSubscriptionEventDto::unsetroleIds()
{
    roleIdsIsSet_ = false;
}

std::vector<std::string>& RepoSubscriptionEventDto::getRoleNames()
{
    return roleNames_;
}

void RepoSubscriptionEventDto::setRoleNames(const std::vector<std::string>& value)
{
    roleNames_ = value;
    roleNamesIsSet_ = true;
}

bool RepoSubscriptionEventDto::roleNamesIsSet() const
{
    return roleNamesIsSet_;
}

void RepoSubscriptionEventDto::unsetroleNames()
{
    roleNamesIsSet_ = false;
}

}
}
}
}
}


