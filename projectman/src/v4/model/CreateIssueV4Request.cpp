

#include "huaweicloud/projectman/v4/model/CreateIssueV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIssueV4Request::CreateIssueV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIssueV4Request::~CreateIssueV4Request() = default;

void CreateIssueV4Request::validate()
{
}

web::json::value CreateIssueV4Request::toJson() const
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
bool CreateIssueV4Request::fromJson(const web::json::value& val)
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
            CreateIssueRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIssueV4Request::getProjectId() const
{
    return projectId_;
}

void CreateIssueV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIssueV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIssueV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateIssueRequestV4 CreateIssueV4Request::getBody() const
{
    return body_;
}

void CreateIssueV4Request::setBody(const CreateIssueRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIssueV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIssueV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


