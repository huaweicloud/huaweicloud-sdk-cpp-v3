

#include "huaweicloud/projectman/v4/model/BatchDeleteIssuesV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteIssuesV4Request::BatchDeleteIssuesV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteIssuesV4Request::~BatchDeleteIssuesV4Request() = default;

void BatchDeleteIssuesV4Request::validate()
{
}

web::json::value BatchDeleteIssuesV4Request::toJson() const
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
bool BatchDeleteIssuesV4Request::fromJson(const web::json::value& val)
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
            BatchDelelteIssuesRequestV4 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteIssuesV4Request::getProjectId() const
{
    return projectId_;
}

void BatchDeleteIssuesV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteIssuesV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteIssuesV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchDelelteIssuesRequestV4 BatchDeleteIssuesV4Request::getBody() const
{
    return body_;
}

void BatchDeleteIssuesV4Request::setBody(const BatchDelelteIssuesRequestV4& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteIssuesV4Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteIssuesV4Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


