

#include "huaweicloud/codeartspipeline/v2/model/RuleContent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleContent::RuleContent()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    canModifyWhenInherit_ = false;
    canModifyWhenInheritIsSet_ = false;
    propertiesIsSet_ = false;
}

RuleContent::~RuleContent() = default;

void RuleContent::validate()
{
}

web::json::value RuleContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(canModifyWhenInheritIsSet_) {
        val[utility::conversions::to_string_t("can_modify_when_inherit")] = ModelBase::toJson(canModifyWhenInherit_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool RuleContent::fromJson(const web::json::value& val)
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
            std::vector<RuleProperty> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    return ok;
}


std::string RuleContent::getGroupName() const
{
    return groupName_;
}

void RuleContent::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool RuleContent::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void RuleContent::unsetgroupName()
{
    groupNameIsSet_ = false;
}

bool RuleContent::isCanModifyWhenInherit() const
{
    return canModifyWhenInherit_;
}

void RuleContent::setCanModifyWhenInherit(bool value)
{
    canModifyWhenInherit_ = value;
    canModifyWhenInheritIsSet_ = true;
}

bool RuleContent::canModifyWhenInheritIsSet() const
{
    return canModifyWhenInheritIsSet_;
}

void RuleContent::unsetcanModifyWhenInherit()
{
    canModifyWhenInheritIsSet_ = false;
}

std::vector<RuleProperty>& RuleContent::getProperties()
{
    return properties_;
}

void RuleContent::setProperties(const std::vector<RuleProperty>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool RuleContent::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void RuleContent::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


