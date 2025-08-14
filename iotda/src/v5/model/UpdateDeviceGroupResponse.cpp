

#include "huaweicloud/iotda/v5/model/UpdateDeviceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceGroupResponse::UpdateDeviceGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    superGroupId_ = "";
    superGroupIdIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    dynamicGroupRule_ = "";
    dynamicGroupRuleIsSet_ = false;
}

UpdateDeviceGroupResponse::~UpdateDeviceGroupResponse() = default;

void UpdateDeviceGroupResponse::validate()
{
}

web::json::value UpdateDeviceGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(superGroupIdIsSet_) {
        val[utility::conversions::to_string_t("super_group_id")] = ModelBase::toJson(superGroupId_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(dynamicGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("dynamic_group_rule")] = ModelBase::toJson(dynamicGroupRule_);
    }

    return val;
}
bool UpdateDeviceGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
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


std::string UpdateDeviceGroupResponse::getGroupId() const
{
    return groupId_;
}

void UpdateDeviceGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateDeviceGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateDeviceGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string UpdateDeviceGroupResponse::getName() const
{
    return name_;
}

void UpdateDeviceGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDeviceGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDeviceGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDeviceGroupResponse::getDescription() const
{
    return description_;
}

void UpdateDeviceGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDeviceGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDeviceGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateDeviceGroupResponse::getSuperGroupId() const
{
    return superGroupId_;
}

void UpdateDeviceGroupResponse::setSuperGroupId(const std::string& value)
{
    superGroupId_ = value;
    superGroupIdIsSet_ = true;
}

bool UpdateDeviceGroupResponse::superGroupIdIsSet() const
{
    return superGroupIdIsSet_;
}

void UpdateDeviceGroupResponse::unsetsuperGroupId()
{
    superGroupIdIsSet_ = false;
}

std::string UpdateDeviceGroupResponse::getGroupType() const
{
    return groupType_;
}

void UpdateDeviceGroupResponse::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool UpdateDeviceGroupResponse::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void UpdateDeviceGroupResponse::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string UpdateDeviceGroupResponse::getDynamicGroupRule() const
{
    return dynamicGroupRule_;
}

void UpdateDeviceGroupResponse::setDynamicGroupRule(const std::string& value)
{
    dynamicGroupRule_ = value;
    dynamicGroupRuleIsSet_ = true;
}

bool UpdateDeviceGroupResponse::dynamicGroupRuleIsSet() const
{
    return dynamicGroupRuleIsSet_;
}

void UpdateDeviceGroupResponse::unsetdynamicGroupRule()
{
    dynamicGroupRuleIsSet_ = false;
}

}
}
}
}
}


