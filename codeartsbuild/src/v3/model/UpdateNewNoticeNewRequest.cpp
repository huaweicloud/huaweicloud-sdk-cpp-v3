

#include "huaweicloud/codeartsbuild/v3/model/UpdateNewNoticeNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNewNoticeNewRequest::UpdateNewNoticeNewRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNewNoticeNewRequest::~UpdateNewNoticeNewRequest() = default;

void UpdateNewNoticeNewRequest::validate()
{
}

web::json::value UpdateNewNoticeNewRequest::toJson() const
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
bool UpdateNewNoticeNewRequest::fromJson(const web::json::value& val)
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


std::string UpdateNewNoticeNewRequest::getJobId() const
{
    return jobId_;
}

void UpdateNewNoticeNewRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateNewNoticeNewRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateNewNoticeNewRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

UpdateNoticeRequestBody UpdateNewNoticeNewRequest::getBody() const
{
    return body_;
}

void UpdateNewNoticeNewRequest::setBody(const UpdateNoticeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNewNoticeNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNewNoticeNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


