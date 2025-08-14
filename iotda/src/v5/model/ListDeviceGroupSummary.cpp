

#include "huaweicloud/iotda/v5/model/ListDeviceGroupSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceGroupSummary::ListDeviceGroupSummary()
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

ListDeviceGroupSummary::~ListDeviceGroupSummary() = default;

void ListDeviceGroupSummary::validate()
{
}

web::json::value ListDeviceGroupSummary::toJson() const
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
bool ListDeviceGroupSummary::fromJson(const web::json::value& val)
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


std::string ListDeviceGroupSummary::getGroupId() const
{
    return groupId_;
}

void ListDeviceGroupSummary::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListDeviceGroupSummary::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListDeviceGroupSummary::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListDeviceGroupSummary::getName() const
{
    return name_;
}

void ListDeviceGroupSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDeviceGroupSummary::nameIsSet() const
{
    return nameIsSet_;
}

void ListDeviceGroupSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDeviceGroupSummary::getDescription() const
{
    return description_;
}

void ListDeviceGroupSummary::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListDeviceGroupSummary::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListDeviceGroupSummary::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListDeviceGroupSummary::getSuperGroupId() const
{
    return superGroupId_;
}

void ListDeviceGroupSummary::setSuperGroupId(const std::string& value)
{
    superGroupId_ = value;
    superGroupIdIsSet_ = true;
}

bool ListDeviceGroupSummary::superGroupIdIsSet() const
{
    return superGroupIdIsSet_;
}

void ListDeviceGroupSummary::unsetsuperGroupId()
{
    superGroupIdIsSet_ = false;
}

std::string ListDeviceGroupSummary::getGroupType() const
{
    return groupType_;
}

void ListDeviceGroupSummary::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ListDeviceGroupSummary::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ListDeviceGroupSummary::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

}
}
}
}
}


