

#include "huaweicloud/projectman/v4/model/BatchBaselineIpdIssuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchBaselineIpdIssuesRequest::BatchBaselineIpdIssuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchBaselineIpdIssuesRequest::~BatchBaselineIpdIssuesRequest() = default;

void BatchBaselineIpdIssuesRequest::validate()
{
}

web::json::value BatchBaselineIpdIssuesRequest::toJson() const
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
bool BatchBaselineIpdIssuesRequest::fromJson(const web::json::value& val)
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
            BatchBaselineIpdIssuesParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchBaselineIpdIssuesRequest::getProjectId() const
{
    return projectId_;
}

void BatchBaselineIpdIssuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchBaselineIpdIssuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchBaselineIpdIssuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchBaselineIpdIssuesParam BatchBaselineIpdIssuesRequest::getBody() const
{
    return body_;
}

void BatchBaselineIpdIssuesRequest::setBody(const BatchBaselineIpdIssuesParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchBaselineIpdIssuesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchBaselineIpdIssuesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


