

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupsInheritResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupsInheritResponse::ShowGroupsInheritResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    sourceSetting_ = "";
    sourceSettingIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    upwardInheritEditable_ = false;
    upwardInheritEditableIsSet_ = false;
}

ShowGroupsInheritResponse::~ShowGroupsInheritResponse() = default;

void ShowGroupsInheritResponse::validate()
{
}

web::json::value ShowGroupsInheritResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(sourceSettingIsSet_) {
        val[utility::conversions::to_string_t("source_setting")] = ModelBase::toJson(sourceSetting_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(upwardInheritEditableIsSet_) {
        val[utility::conversions::to_string_t("upward_inherit_editable")] = ModelBase::toJson(upwardInheritEditable_);
    }

    return val;
}
bool ShowGroupsInheritResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_setting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upward_inherit_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upward_inherit_editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpwardInheritEditable(refVal);
        }
    }
    return ok;
}


std::string ShowGroupsInheritResponse::getGroupId() const
{
    return groupId_;
}

void ShowGroupsInheritResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupsInheritResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupsInheritResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowGroupsInheritResponse::getSourceSetting() const
{
    return sourceSetting_;
}

void ShowGroupsInheritResponse::setSourceSetting(const std::string& value)
{
    sourceSetting_ = value;
    sourceSettingIsSet_ = true;
}

bool ShowGroupsInheritResponse::sourceSettingIsSet() const
{
    return sourceSettingIsSet_;
}

void ShowGroupsInheritResponse::unsetsourceSetting()
{
    sourceSettingIsSet_ = false;
}

std::string ShowGroupsInheritResponse::getProjectId() const
{
    return projectId_;
}

void ShowGroupsInheritResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowGroupsInheritResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowGroupsInheritResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool ShowGroupsInheritResponse::isUpwardInheritEditable() const
{
    return upwardInheritEditable_;
}

void ShowGroupsInheritResponse::setUpwardInheritEditable(bool value)
{
    upwardInheritEditable_ = value;
    upwardInheritEditableIsSet_ = true;
}

bool ShowGroupsInheritResponse::upwardInheritEditableIsSet() const
{
    return upwardInheritEditableIsSet_;
}

void ShowGroupsInheritResponse::unsetupwardInheritEditable()
{
    upwardInheritEditableIsSet_ = false;
}

}
}
}
}
}


