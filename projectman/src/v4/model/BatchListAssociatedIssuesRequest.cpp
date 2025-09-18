

#include "huaweicloud/projectman/v4/model/BatchListAssociatedIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchListAssociatedIssuesRequest::BatchListAssociatedIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

BatchListAssociatedIssuesRequest::~BatchListAssociatedIssuesRequest() = default;

void BatchListAssociatedIssuesRequest::validate()
{
}

web::json::value BatchListAssociatedIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool BatchListAssociatedIssuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string BatchListAssociatedIssuesRequest::getProjectId() const
{
    return projectId_;
}

void BatchListAssociatedIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchListAssociatedIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchListAssociatedIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t BatchListAssociatedIssuesRequest::getLimit() const
{
    return limit_;
}

void BatchListAssociatedIssuesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BatchListAssociatedIssuesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void BatchListAssociatedIssuesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BatchListAssociatedIssuesRequest::getOffset() const
{
    return offset_;
}

void BatchListAssociatedIssuesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BatchListAssociatedIssuesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void BatchListAssociatedIssuesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


