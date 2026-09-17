

#include "huaweicloud/projectman/v4/model/BatchCreateIpdIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIpdIssuesRequest::BatchCreateIpdIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateIpdIssuesRequest::~BatchCreateIpdIssuesRequest() = default;

void BatchCreateIpdIssuesRequest::validate()
{
}

web::json::value BatchCreateIpdIssuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateIpdIssuesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateIpdProjectIssueParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateIpdIssuesRequest::getProjectId() const
{
    return projectId_;
}

void BatchCreateIpdIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchCreateIpdIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchCreateIpdIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<CreateIpdProjectIssueParam>& BatchCreateIpdIssuesRequest::getBody()
{
    return body_;
}

void BatchCreateIpdIssuesRequest::setBody(const std::vector<CreateIpdProjectIssueParam>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateIpdIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateIpdIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


