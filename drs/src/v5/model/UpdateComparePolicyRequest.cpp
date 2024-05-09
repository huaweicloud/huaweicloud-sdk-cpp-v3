

#include "huaweicloud/drs/v5/model/UpdateComparePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateComparePolicyRequest::UpdateComparePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateComparePolicyRequest::~UpdateComparePolicyRequest() = default;

void UpdateComparePolicyRequest::validate()
{
}

web::json::value UpdateComparePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateComparePolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            ModifyComparePolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateComparePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateComparePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateComparePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateComparePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateComparePolicyRequest::getJobId() const
{
    return jobId_;
}

void UpdateComparePolicyRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateComparePolicyRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateComparePolicyRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

ModifyComparePolicyReq UpdateComparePolicyRequest::getBody() const
{
    return body_;
}

void UpdateComparePolicyRequest::setBody(const ModifyComparePolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateComparePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateComparePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


