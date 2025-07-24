

#include "huaweicloud/cloudtest/v1/model/UploadStepImgRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadStepImgRequest::UploadStepImgRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UploadStepImgRequest::~UploadStepImgRequest() = default;

void UploadStepImgRequest::validate()
{
}

web::json::value UploadStepImgRequest::toJson() const
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
bool UploadStepImgRequest::fromJson(const web::json::value& val)
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
            UploadStepImgRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadStepImgRequest::getProjectId() const
{
    return projectId_;
}

void UploadStepImgRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadStepImgRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadStepImgRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UploadStepImgRequestBody UploadStepImgRequest::getBody() const
{
    return body_;
}

void UploadStepImgRequest::setBody(const UploadStepImgRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadStepImgRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadStepImgRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


