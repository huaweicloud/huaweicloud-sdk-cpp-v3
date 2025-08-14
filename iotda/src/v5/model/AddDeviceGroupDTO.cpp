

#include "huaweicloud/iotda/v5/model/AddDeviceGroupDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddDeviceGroupDTO::AddDeviceGroupDTO()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    superGroupId_ = "";
    superGroupIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    dynamicGroupRule_ = "";
    dynamicGroupRuleIsSet_ = false;
}

AddDeviceGroupDTO::~AddDeviceGroupDTO() = default;

void AddDeviceGroupDTO::validate()
{
}

web::json::value AddDeviceGroupDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(superGroupIdIsSet_) {
        val[utility::conversions::to_string_t("super_group_id")] = ModelBase::toJson(superGroupId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(dynamicGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("dynamic_group_rule")] = ModelBase::toJson(dynamicGroupRule_);
    }

    return val;
}
bool AddDeviceGroupDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("super_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("super_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuperGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dynamic_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dynamic_group_rule"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDynamicGroupRule(refVal);
        }
    }
    return ok;
}


std::string AddDeviceGroupDTO::getName() const
{
    return name_;
}

void AddDeviceGroupDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddDeviceGroupDTO::nameIsSet() const
{
    return nameIsSet_;
}

void AddDeviceGroupDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string AddDeviceGroupDTO::getDescription() const
{
    return description_;
}

void AddDeviceGroupDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDeviceGroupDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDeviceGroupDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddDeviceGroupDTO::getSuperGroupId() const
{
    return superGroupId_;
}

void AddDeviceGroupDTO::setSuperGroupId(const std::string& value)
{
    superGroupId_ = value;
    superGroupIdIsSet_ = true;
}

bool AddDeviceGroupDTO::superGroupIdIsSet() const
{
    return superGroupIdIsSet_;
}

void AddDeviceGroupDTO::unsetsuperGroupId()
{
    superGroupIdIsSet_ = false;
}

std::string AddDeviceGroupDTO::getAppId() const
{
    return appId_;
}

void AddDeviceGroupDTO::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddDeviceGroupDTO::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddDeviceGroupDTO::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AddDeviceGroupDTO::getGroupType() const
{
    return groupType_;
}

void AddDeviceGroupDTO::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool AddDeviceGroupDTO::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void AddDeviceGroupDTO::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string AddDeviceGroupDTO::getDynamicGroupRule() const
{
    return dynamicGroupRule_;
}

void AddDeviceGroupDTO::setDynamicGroupRule(const std::string& value)
{
    dynamicGroupRule_ = value;
    dynamicGroupRuleIsSet_ = true;
}

bool AddDeviceGroupDTO::dynamicGroupRuleIsSet() const
{
    return dynamicGroupRuleIsSet_;
}

void AddDeviceGroupDTO::unsetdynamicGroupRule()
{
    dynamicGroupRuleIsSet_ = false;
}

}
}
}
}
}


