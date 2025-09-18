

#include "huaweicloud/projectman/v4/model/UploadIssueImgRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIssueImgRequest::UploadIssueImgRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UploadIssueImgRequest::~UploadIssueImgRequest() = default;

void UploadIssueImgRequest::validate()
{
}

web::json::value UploadIssueImgRequest::toJson() const
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
bool UploadIssueImgRequest::fromJson(const web::json::value& val)
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
            UploadIssueImgRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadIssueImgRequest::getProjectId() const
{
    return projectId_;
}

void UploadIssueImgRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UploadIssueImgRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UploadIssueImgRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UploadIssueImgRequestBody UploadIssueImgRequest::getBody() const
{
    return body_;
}

void UploadIssueImgRequest::setBody(const UploadIssueImgRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadIssueImgRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadIssueImgRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


