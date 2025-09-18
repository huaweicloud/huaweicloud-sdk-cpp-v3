

#include "huaweicloud/codeartscheck/v2/model/CreateTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CreateTaskRequest::CreateTaskRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTaskRequest::~CreateTaskRequest() = default;

void CreateTaskRequest::validate()
{
}

web::json::value CreateTaskRequest::toJson() const
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
bool CreateTaskRequest::fromJson(const web::json::value& val)
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
            CreateTaskRequestV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTaskRequest::getProjectId() const
{
    return projectId_;
}

void CreateTaskRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTaskRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTaskRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateTaskRequestV2 CreateTaskRequest::getBody() const
{
    return body_;
}

void CreateTaskRequest::setBody(const CreateTaskRequestV2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


