

#include "huaweicloud/iotda/v5/model/DeviceGroupResponseSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceGroupResponseSummary::DeviceGroupResponseSummary()
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
}

DeviceGroupResponseSummary::~DeviceGroupResponseSummary() = default;

void DeviceGroupResponseSummary::validate()
{
}

web::json::value DeviceGroupResponseSummary::toJson() const
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

    return val;
}
bool DeviceGroupResponseSummary::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeviceGroupResponseSummary::getGroupId() const
{
    return groupId_;
}

void DeviceGroupResponseSummary::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeviceGroupResponseSummary::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeviceGroupResponseSummary::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeviceGroupResponseSummary::getName() const
{
    return name_;
}

void DeviceGroupResponseSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeviceGroupResponseSummary::nameIsSet() const
{
    return nameIsSet_;
}

void DeviceGroupResponseSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string DeviceGroupResponseSummary::getDescription() const
{
    return description_;
}

void DeviceGroupResponseSummary::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeviceGroupResponseSummary::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeviceGroupResponseSummary::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DeviceGroupResponseSummary::getSuperGroupId() const
{
    return superGroupId_;
}

void DeviceGroupResponseSummary::setSuperGroupId(const std::string& value)
{
    superGroupId_ = value;
    superGroupIdIsSet_ = true;
}

bool DeviceGroupResponseSummary::superGroupIdIsSet() const
{
    return superGroupIdIsSet_;
}

void DeviceGroupResponseSummary::unsetsuperGroupId()
{
    superGroupIdIsSet_ = false;
}

std::string DeviceGroupResponseSummary::getGroupType() const
{
    return groupType_;
}

void DeviceGroupResponseSummary::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool DeviceGroupResponseSummary::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void DeviceGroupResponseSummary::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

}
}
}
}
}


