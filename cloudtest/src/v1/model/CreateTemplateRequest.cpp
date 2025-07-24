

#include "huaweicloud/cloudtest/v1/model/CreateTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTemplateRequest::CreateTemplateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTemplateRequest::~CreateTemplateRequest() = default;

void CreateTemplateRequest::validate()
{
}

web::json::value CreateTemplateRequest::toJson() const
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
bool CreateTemplateRequest::fromJson(const web::json::value& val)
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
            CommRequestSaveTemplateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateRequest::getProjectId() const
{
    return projectId_;
}

void CreateTemplateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTemplateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTemplateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CommRequestSaveTemplateParam CreateTemplateRequest::getBody() const
{
    return body_;
}

void CreateTemplateRequest::setBody(const CommRequestSaveTemplateParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


