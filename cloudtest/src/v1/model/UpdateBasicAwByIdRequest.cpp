

#include "huaweicloud/cloudtest/v1/model/UpdateBasicAwByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateBasicAwByIdRequest::UpdateBasicAwByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    awId_ = "";
    awIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBasicAwByIdRequest::~UpdateBasicAwByIdRequest() = default;

void UpdateBasicAwByIdRequest::validate()
{
}

web::json::value UpdateBasicAwByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(awIdIsSet_) {
        val[utility::conversions::to_string_t("aw_id")] = ModelBase::toJson(awId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBasicAwByIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("aw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateBasicAwReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBasicAwByIdRequest::getProjectId() const
{
    return projectId_;
}

void UpdateBasicAwByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateBasicAwByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateBasicAwByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateBasicAwByIdRequest::getAwId() const
{
    return awId_;
}

void UpdateBasicAwByIdRequest::setAwId(const std::string& value)
{
    awId_ = value;
    awIdIsSet_ = true;
}

bool UpdateBasicAwByIdRequest::awIdIsSet() const
{
    return awIdIsSet_;
}

void UpdateBasicAwByIdRequest::unsetawId()
{
    awIdIsSet_ = false;
}

UpdateBasicAwReq UpdateBasicAwByIdRequest::getBody() const
{
    return body_;
}

void UpdateBasicAwByIdRequest::setBody(const UpdateBasicAwReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBasicAwByIdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBasicAwByIdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


