

#include "huaweicloud/rgc/v1/model/IdentityCenterGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




IdentityCenterGroup::IdentityCenterGroup()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IdentityCenterGroup::~IdentityCenterGroup() = default;

void IdentityCenterGroup::validate()
{
}

web::json::value IdentityCenterGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool IdentityCenterGroup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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
    return ok;
}


std::string IdentityCenterGroup::getGroupId() const
{
    return groupId_;
}

void IdentityCenterGroup::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool IdentityCenterGroup::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void IdentityCenterGroup::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string IdentityCenterGroup::getGroupName() const
{
    return groupName_;
}

void IdentityCenterGroup::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool IdentityCenterGroup::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void IdentityCenterGroup::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string IdentityCenterGroup::getDescription() const
{
    return description_;
}

void IdentityCenterGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IdentityCenterGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IdentityCenterGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


