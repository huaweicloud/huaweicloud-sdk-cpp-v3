

#include "huaweicloud/projectman/v4/model/BatchCreateIssuesV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIssuesV2Request::BatchCreateIssuesV2Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateIssuesV2Request::~BatchCreateIssuesV2Request() = default;

void BatchCreateIssuesV2Request::validate()
{
}

web::json::value BatchCreateIssuesV2Request::toJson() const
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
bool BatchCreateIssuesV2Request::fromJson(const web::json::value& val)
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
            std::vector<IssueCreateEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateIssuesV2Request::getProjectId() const
{
    return projectId_;
}

void BatchCreateIssuesV2Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchCreateIssuesV2Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchCreateIssuesV2Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<IssueCreateEntity>& BatchCreateIssuesV2Request::getBody()
{
    return body_;
}

void BatchCreateIssuesV2Request::setBody(const std::vector<IssueCreateEntity>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateIssuesV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateIssuesV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


