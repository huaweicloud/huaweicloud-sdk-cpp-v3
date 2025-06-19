

#include "huaweicloud/codeartsbuild/v3/model/DisableTheJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableTheJobRequest::DisableTheJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

DisableTheJobRequest::~DisableTheJobRequest() = default;

void DisableTheJobRequest::validate()
{
}

web::json::value DisableTheJobRequest::toJson() const
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
bool DisableTheJobRequest::fromJson(const web::json::value& val)
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
            DisableTheJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DisableTheJobRequest::getJobId() const
{
    return jobId_;
}

void DisableTheJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DisableTheJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DisableTheJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

DisableTheJobRequestBody DisableTheJobRequest::getBody() const
{
    return body_;
}

void DisableTheJobRequest::setBody(const DisableTheJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DisableTheJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DisableTheJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


