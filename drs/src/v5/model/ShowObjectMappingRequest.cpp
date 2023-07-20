

#include "huaweicloud/drs/v5/model/ShowObjectMappingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowObjectMappingRequest::ShowObjectMappingRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowObjectMappingRequest::~ShowObjectMappingRequest() = default;

void ShowObjectMappingRequest::validate()
{
}

web::json::value ShowObjectMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowObjectMappingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryUserSelectedObjectInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ShowObjectMappingRequest::getJobId() const
{
    return jobId_;
}

void ShowObjectMappingRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowObjectMappingRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowObjectMappingRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowObjectMappingRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowObjectMappingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowObjectMappingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowObjectMappingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryUserSelectedObjectInfoReq ShowObjectMappingRequest::getBody() const
{
    return body_;
}

void ShowObjectMappingRequest::setBody(const QueryUserSelectedObjectInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowObjectMappingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowObjectMappingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


