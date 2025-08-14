

#include "huaweicloud/iotda/v5/model/AddDeviceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddDeviceGroupResponse::AddDeviceGroupResponse()
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

AddDeviceGroupResponse::~AddDeviceGroupResponse() = default;

void AddDeviceGroupResponse::validate()
{
}

web::json::value AddDeviceGroupResponse::toJson() const
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
bool AddDeviceGroupResponse::fromJson(const web::json::value& val)
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


std::string AddDeviceGroupResponse::getGroupId() const
{
    return groupId_;
}

void AddDeviceGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AddDeviceGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AddDeviceGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string AddDeviceGroupResponse::getName() const
{
    return name_;
}

void AddDeviceGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddDeviceGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AddDeviceGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AddDeviceGroupResponse::getDescription() const
{
    return description_;
}

void AddDeviceGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDeviceGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDeviceGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddDeviceGroupResponse::getSuperGroupId() const
{
    return superGroupId_;
}

void AddDeviceGroupResponse::setSuperGroupId(const std::string& value)
{
    superGroupId_ = value;
    superGroupIdIsSet_ = true;
}

bool AddDeviceGroupResponse::superGroupIdIsSet() const
{
    return superGroupIdIsSet_;
}

void AddDeviceGroupResponse::unsetsuperGroupId()
{
    superGroupIdIsSet_ = false;
}

std::string AddDeviceGroupResponse::getGroupType() const
{
    return groupType_;
}

void AddDeviceGroupResponse::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool AddDeviceGroupResponse::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void AddDeviceGroupResponse::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string AddDeviceGroupResponse::getDynamicGroupRule() const
{
    return dynamicGroupRule_;
}

void AddDeviceGroupResponse::setDynamicGroupRule(const std::string& value)
{
    dynamicGroupRule_ = value;
    dynamicGroupRuleIsSet_ = true;
}

bool AddDeviceGroupResponse::dynamicGroupRuleIsSet() const
{
    return dynamicGroupRuleIsSet_;
}

void AddDeviceGroupResponse::unsetdynamicGroupRule()
{
    dynamicGroupRuleIsSet_ = false;
}

}
}
}
}
}


