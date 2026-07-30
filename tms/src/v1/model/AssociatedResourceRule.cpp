

#include "huaweicloud/tms/v1/model/AssociatedResourceRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




AssociatedResourceRule::AssociatedResourceRule()
{
    settingName_ = "";
    settingNameIsSet_ = false;
    tagKeysIsSet_ = false;
    existingResourceStatus_ = "";
    existingResourceStatusIsSet_ = false;
    autoDeleteStatus_ = "";
    autoDeleteStatusIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

AssociatedResourceRule::~AssociatedResourceRule() = default;

void AssociatedResourceRule::validate()
{
}

web::json::value AssociatedResourceRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingNameIsSet_) {
        val[utility::conversions::to_string_t("setting_name")] = ModelBase::toJson(settingName_);
    }
    if(tagKeysIsSet_) {
        val[utility::conversions::to_string_t("tag_keys")] = ModelBase::toJson(tagKeys_);
    }
    if(existingResourceStatusIsSet_) {
        val[utility::conversions::to_string_t("existing_resource_status")] = ModelBase::toJson(existingResourceStatus_);
    }
    if(autoDeleteStatusIsSet_) {
        val[utility::conversions::to_string_t("auto_delete_status")] = ModelBase::toJson(autoDeleteStatus_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool AssociatedResourceRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("setting_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existing_resource_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existing_resource_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistingResourceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_delete_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_delete_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoDeleteStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    return ok;
}


std::string AssociatedResourceRule::getSettingName() const
{
    return settingName_;
}

void AssociatedResourceRule::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool AssociatedResourceRule::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void AssociatedResourceRule::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::vector<std::string>& AssociatedResourceRule::getTagKeys()
{
    return tagKeys_;
}

void AssociatedResourceRule::setTagKeys(const std::vector<std::string>& value)
{
    tagKeys_ = value;
    tagKeysIsSet_ = true;
}

bool AssociatedResourceRule::tagKeysIsSet() const
{
    return tagKeysIsSet_;
}

void AssociatedResourceRule::unsettagKeys()
{
    tagKeysIsSet_ = false;
}

std::string AssociatedResourceRule::getExistingResourceStatus() const
{
    return existingResourceStatus_;
}

void AssociatedResourceRule::setExistingResourceStatus(const std::string& value)
{
    existingResourceStatus_ = value;
    existingResourceStatusIsSet_ = true;
}

bool AssociatedResourceRule::existingResourceStatusIsSet() const
{
    return existingResourceStatusIsSet_;
}

void AssociatedResourceRule::unsetexistingResourceStatus()
{
    existingResourceStatusIsSet_ = false;
}

std::string AssociatedResourceRule::getAutoDeleteStatus() const
{
    return autoDeleteStatus_;
}

void AssociatedResourceRule::setAutoDeleteStatus(const std::string& value)
{
    autoDeleteStatus_ = value;
    autoDeleteStatusIsSet_ = true;
}

bool AssociatedResourceRule::autoDeleteStatusIsSet() const
{
    return autoDeleteStatusIsSet_;
}

void AssociatedResourceRule::unsetautoDeleteStatus()
{
    autoDeleteStatusIsSet_ = false;
}

std::string AssociatedResourceRule::getStatus() const
{
    return status_;
}

void AssociatedResourceRule::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssociatedResourceRule::statusIsSet() const
{
    return statusIsSet_;
}

void AssociatedResourceRule::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AssociatedResourceRule::getRegionId() const
{
    return regionId_;
}

void AssociatedResourceRule::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool AssociatedResourceRule::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void AssociatedResourceRule::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


