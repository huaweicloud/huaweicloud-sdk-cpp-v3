

#include "huaweicloud/projectman/v4/model/BatchUpdateIpdIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateIpdIssuesRequest::BatchUpdateIpdIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateIpdIssuesRequest::~BatchUpdateIpdIssuesRequest() = default;

void BatchUpdateIpdIssuesRequest::validate()
{
}

web::json::value BatchUpdateIpdIssuesRequest::toJson() const
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
bool BatchUpdateIpdIssuesRequest::fromJson(const web::json::value& val)
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
            BatchUpdateIssuesParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateIpdIssuesRequest::getProjectId() const
{
    return projectId_;
}

void BatchUpdateIpdIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateIpdIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateIpdIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchUpdateIssuesParam BatchUpdateIpdIssuesRequest::getBody() const
{
    return body_;
}

void BatchUpdateIpdIssuesRequest::setBody(const BatchUpdateIssuesParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateIpdIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateIpdIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


