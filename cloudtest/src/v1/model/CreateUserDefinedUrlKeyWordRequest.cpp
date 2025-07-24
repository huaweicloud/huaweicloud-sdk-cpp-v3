

#include "huaweicloud/cloudtest/v1/model/CreateUserDefinedUrlKeyWordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateUserDefinedUrlKeyWordRequest::CreateUserDefinedUrlKeyWordRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateUserDefinedUrlKeyWordRequest::~CreateUserDefinedUrlKeyWordRequest() = default;

void CreateUserDefinedUrlKeyWordRequest::validate()
{
}

web::json::value CreateUserDefinedUrlKeyWordRequest::toJson() const
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
bool CreateUserDefinedUrlKeyWordRequest::fromJson(const web::json::value& val)
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
            CreateBasicAwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateUserDefinedUrlKeyWordRequest::getProjectId() const
{
    return projectId_;
}

void CreateUserDefinedUrlKeyWordRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateUserDefinedUrlKeyWordRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateBasicAwReq CreateUserDefinedUrlKeyWordRequest::getBody() const
{
    return body_;
}

void CreateUserDefinedUrlKeyWordRequest::setBody(const CreateBasicAwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUserDefinedUrlKeyWordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


