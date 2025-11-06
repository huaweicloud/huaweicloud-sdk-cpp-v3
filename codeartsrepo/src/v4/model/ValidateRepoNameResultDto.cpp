

#include "huaweicloud/codeartsrepo/v4/model/ValidateRepoNameResultDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ValidateRepoNameResultDto::ValidateRepoNameResultDto()
{
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ValidateRepoNameResultDto::~ValidateRepoNameResultDto() = default;

void ValidateRepoNameResultDto::validate()
{
}

web::json::value ValidateRepoNameResultDto::toJson() const
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
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool ValidateRepoNameResultDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string ValidateRepoNameResultDto::getName() const
{
    return name_;
}

void ValidateRepoNameResultDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ValidateRepoNameResultDto::nameIsSet() const
{
    return nameIsSet_;
}

void ValidateRepoNameResultDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ValidateRepoNameResultDto::getProjectId() const
{
    return projectId_;
}

void ValidateRepoNameResultDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ValidateRepoNameResultDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ValidateRepoNameResultDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ValidateRepoNameResultDto::getGroupId() const
{
    return groupId_;
}

void ValidateRepoNameResultDto::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ValidateRepoNameResultDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ValidateRepoNameResultDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

bool ValidateRepoNameResultDto::isResult() const
{
    return result_;
}

void ValidateRepoNameResultDto::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ValidateRepoNameResultDto::resultIsSet() const
{
    return resultIsSet_;
}

void ValidateRepoNameResultDto::unsetresult()
{
    resultIsSet_ = false;
}

std::string ValidateRepoNameResultDto::getErrorMessage() const
{
    return errorMessage_;
}

void ValidateRepoNameResultDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ValidateRepoNameResultDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ValidateRepoNameResultDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


