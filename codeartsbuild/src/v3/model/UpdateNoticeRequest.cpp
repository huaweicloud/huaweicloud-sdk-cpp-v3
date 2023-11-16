

#include "huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNoticeRequest::UpdateNoticeRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNoticeRequest::~UpdateNoticeRequest() = default;

void UpdateNoticeRequest::validate()
{
}

web::json::value UpdateNoticeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNoticeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateNoticeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNoticeRequest::getJobId() const
{
    return jobId_;
}

void UpdateNoticeRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateNoticeRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateNoticeRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

UpdateNoticeRequestBody UpdateNoticeRequest::getBody() const
{
    return body_;
}

void UpdateNoticeRequest::setBody(const UpdateNoticeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNoticeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNoticeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


