

#include "huaweicloud/codeartscheck/v2/model/ShowTaskListByProjectIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskListByProjectIdRequest::ShowTaskListByProjectIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowTaskListByProjectIdRequest::~ShowTaskListByProjectIdRequest() = default;

void ShowTaskListByProjectIdRequest::validate()
{
}

web::json::value ShowTaskListByProjectIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowTaskListByProjectIdRequest::fromJson(const web::json::value& val)
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


std::string ShowTaskListByProjectIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowTaskListByProjectIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTaskListByProjectIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTaskListByProjectIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowTaskListByProjectIdRequest::getOffset() const
{
    return offset_;
}

void ShowTaskListByProjectIdRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTaskListByProjectIdRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTaskListByProjectIdRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTaskListByProjectIdRequest::getLimit() const
{
    return limit_;
}

void ShowTaskListByProjectIdRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTaskListByProjectIdRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTaskListByProjectIdRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


