

#include "huaweicloud/drs/v3/model/CreateObjectLevelCompareJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateObjectLevelCompareJobRequest::CreateObjectLevelCompareJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateObjectLevelCompareJobRequest::~CreateObjectLevelCompareJobRequest() = default;

void CreateObjectLevelCompareJobRequest::validate()
{
}

web::json::value CreateObjectLevelCompareJobRequest::toJson() const
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
bool CreateObjectLevelCompareJobRequest::fromJson(const web::json::value& val)
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
            CreateObjectCompareJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateObjectLevelCompareJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateObjectLevelCompareJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateObjectLevelCompareJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateObjectLevelCompareJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateObjectLevelCompareJobRequest::getJobId() const
{
    return jobId_;
}

void CreateObjectLevelCompareJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateObjectLevelCompareJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateObjectLevelCompareJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

CreateObjectCompareJobReq CreateObjectLevelCompareJobRequest::getBody() const
{
    return body_;
}

void CreateObjectLevelCompareJobRequest::setBody(const CreateObjectCompareJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateObjectLevelCompareJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateObjectLevelCompareJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


