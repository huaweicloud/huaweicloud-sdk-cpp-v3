

#include "huaweicloud/cloudtest/v1/model/ShowPlansRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlansRequest::ShowPlansRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowPlansRequest::~ShowPlansRequest() = default;

void ShowPlansRequest::validate()
{
}

web::json::value ShowPlansRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowPlansRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowPlansRequest::getProjectId() const
{
    return projectId_;
}

void ShowPlansRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPlansRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPlansRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPlansRequest::getName() const
{
    return name_;
}

void ShowPlansRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPlansRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPlansRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPlansRequest::getCurrentStage() const
{
    return currentStage_;
}

void ShowPlansRequest::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool ShowPlansRequest::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void ShowPlansRequest::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

int32_t ShowPlansRequest::getOffset() const
{
    return offset_;
}

void ShowPlansRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowPlansRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowPlansRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowPlansRequest::getLimit() const
{
    return limit_;
}

void ShowPlansRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowPlansRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowPlansRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


