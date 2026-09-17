

#include "huaweicloud/projectman/v4/model/CreatePlansRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreatePlansRequest::CreatePlansRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePlansRequest::~CreatePlansRequest() = default;

void CreatePlansRequest::validate()
{
}

web::json::value CreatePlansRequest::toJson() const
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
bool CreatePlansRequest::fromJson(const web::json::value& val)
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
            PlanCreateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePlansRequest::getProjectId() const
{
    return projectId_;
}

void CreatePlansRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePlansRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePlansRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

PlanCreateParam CreatePlansRequest::getBody() const
{
    return body_;
}

void CreatePlansRequest::setBody(const PlanCreateParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePlansRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePlansRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


