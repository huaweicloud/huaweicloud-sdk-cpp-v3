

#include "huaweicloud/codehub/v4/model/ValidateRepoNameDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ValidateRepoNameDto::ValidateRepoNameDto()
{
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ValidateRepoNameDto::~ValidateRepoNameDto() = default;

void ValidateRepoNameDto::validate()
{
}

web::json::value ValidateRepoNameDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ValidateRepoNameDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string ValidateRepoNameDto::getName() const
{
    return name_;
}

void ValidateRepoNameDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ValidateRepoNameDto::nameIsSet() const
{
    return nameIsSet_;
}

void ValidateRepoNameDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ValidateRepoNameDto::getProjectId() const
{
    return projectId_;
}

void ValidateRepoNameDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ValidateRepoNameDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ValidateRepoNameDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ValidateRepoNameDto::getGroupId() const
{
    return groupId_;
}

void ValidateRepoNameDto::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ValidateRepoNameDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ValidateRepoNameDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


