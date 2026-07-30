

#include "huaweicloud/tms/v1/model/ReqAssociatedResourceRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqAssociatedResourceRule::ReqAssociatedResourceRule()
{
    settingName_ = "";
    settingNameIsSet_ = false;
    tagKeysIsSet_ = false;
    existingResourceStatus_ = "";
    existingResourceStatusIsSet_ = false;
    autoDeleteStatus_ = "";
    autoDeleteStatusIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
}

ReqAssociatedResourceRule::~ReqAssociatedResourceRule() = default;

void ReqAssociatedResourceRule::validate()
{
}

web::json::value ReqAssociatedResourceRule::toJson() const
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
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }

    return val;
}
bool ReqAssociatedResourceRule::fromJson(const web::json::value& val)
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


std::string ReqAssociatedResourceRule::getSettingName() const
{
    return settingName_;
}

void ReqAssociatedResourceRule::setSettingName(const std::string& value)
{
    settingName_ = value;
    settingNameIsSet_ = true;
}

bool ReqAssociatedResourceRule::settingNameIsSet() const
{
    return settingNameIsSet_;
}

void ReqAssociatedResourceRule::unsetsettingName()
{
    settingNameIsSet_ = false;
}

std::vector<std::string>& ReqAssociatedResourceRule::getTagKeys()
{
    return tagKeys_;
}

void ReqAssociatedResourceRule::setTagKeys(const std::vector<std::string>& value)
{
    tagKeys_ = value;
    tagKeysIsSet_ = true;
}

bool ReqAssociatedResourceRule::tagKeysIsSet() const
{
    return tagKeysIsSet_;
}

void ReqAssociatedResourceRule::unsettagKeys()
{
    tagKeysIsSet_ = false;
}

std::string ReqAssociatedResourceRule::getExistingResourceStatus() const
{
    return existingResourceStatus_;
}

void ReqAssociatedResourceRule::setExistingResourceStatus(const std::string& value)
{
    existingResourceStatus_ = value;
    existingResourceStatusIsSet_ = true;
}

bool ReqAssociatedResourceRule::existingResourceStatusIsSet() const
{
    return existingResourceStatusIsSet_;
}

void ReqAssociatedResourceRule::unsetexistingResourceStatus()
{
    existingResourceStatusIsSet_ = false;
}

std::string ReqAssociatedResourceRule::getAutoDeleteStatus() const
{
    return autoDeleteStatus_;
}

void ReqAssociatedResourceRule::setAutoDeleteStatus(const std::string& value)
{
    autoDeleteStatus_ = value;
    autoDeleteStatusIsSet_ = true;
}

bool ReqAssociatedResourceRule::autoDeleteStatusIsSet() const
{
    return autoDeleteStatusIsSet_;
}

void ReqAssociatedResourceRule::unsetautoDeleteStatus()
{
    autoDeleteStatusIsSet_ = false;
}

std::string ReqAssociatedResourceRule::getRegionId() const
{
    return regionId_;
}

void ReqAssociatedResourceRule::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ReqAssociatedResourceRule::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ReqAssociatedResourceRule::unsetregionId()
{
    regionIdIsSet_ = false;
}

}
}
}
}
}


