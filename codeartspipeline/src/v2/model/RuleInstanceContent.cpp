

#include "huaweicloud/codeartspipeline/v2/model/RuleInstanceContent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleInstanceContent::RuleInstanceContent()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    canModifyWhenInherit_ = false;
    canModifyWhenInheritIsSet_ = false;
    propertiesIsSet_ = false;
}

RuleInstanceContent::~RuleInstanceContent() = default;

void RuleInstanceContent::validate()
{
}

web::json::value RuleInstanceContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(canModifyWhenInheritIsSet_) {
        val[utility::conversions::to_string_t("can_modify_when_inherit")] = ModelBase::toJson(canModifyWhenInherit_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool RuleInstanceContent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_modify_when_inherit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_modify_when_inherit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanModifyWhenInherit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleInstanceProperty> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


std::string RuleInstanceContent::getGroupName() const
{
    return groupName_;
}

void RuleInstanceContent::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool RuleInstanceContent::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void RuleInstanceContent::unsetgroupName()
{
    groupNameIsSet_ = false;
}

bool RuleInstanceContent::isEditable() const
{
    return editable_;
}

void RuleInstanceContent::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool RuleInstanceContent::editableIsSet() const
{
    return editableIsSet_;
}

void RuleInstanceContent::unseteditable()
{
    editableIsSet_ = false;
}

std::string RuleInstanceContent::getType() const
{
    return type_;
}

void RuleInstanceContent::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleInstanceContent::typeIsSet() const
{
    return typeIsSet_;
}

void RuleInstanceContent::unsettype()
{
    typeIsSet_ = false;
}

bool RuleInstanceContent::isCanModifyWhenInherit() const
{
    return canModifyWhenInherit_;
}

void RuleInstanceContent::setCanModifyWhenInherit(bool value)
{
    canModifyWhenInherit_ = value;
    canModifyWhenInheritIsSet_ = true;
}

bool RuleInstanceContent::canModifyWhenInheritIsSet() const
{
    return canModifyWhenInheritIsSet_;
}

void RuleInstanceContent::unsetcanModifyWhenInherit()
{
    canModifyWhenInheritIsSet_ = false;
}

std::vector<RuleInstanceProperty>& RuleInstanceContent::getProperties()
{
    return properties_;
}

void RuleInstanceContent::setProperties(const std::vector<RuleInstanceProperty>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool RuleInstanceContent::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void RuleInstanceContent::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


