

#include "huaweicloud/projectman/v4/model/CreateSystemIssueV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSystemIssueV4Request::CreateSystemIssueV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSystemIssueV4Request::~CreateSystemIssueV4Request() = default;

void CreateSystemIssueV4Request::validate()
{
}

web::json::value CreateSystemIssueV4Request::toJson() const
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
bool CreateSystemIssueV4Request::fromJson(const web::json::value& val)
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
            CreateSystemIssueRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSystemIssueV4Request::getProjectId() const
{
    return projectId_;
}

void CreateSystemIssueV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateSystemIssueV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateSystemIssueV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateSystemIssueRequestV4 CreateSystemIssueV4Request::getBody() const
{
    return body_;
}

void CreateSystemIssueV4Request::setBody(const CreateSystemIssueRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSystemIssueV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSystemIssueV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


