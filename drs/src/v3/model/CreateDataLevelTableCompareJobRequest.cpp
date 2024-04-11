

#include "huaweicloud/drs/v3/model/CreateDataLevelTableCompareJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateDataLevelTableCompareJobRequest::CreateDataLevelTableCompareJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDataLevelTableCompareJobRequest::~CreateDataLevelTableCompareJobRequest() = default;

void CreateDataLevelTableCompareJobRequest::validate()
{
}

web::json::value CreateDataLevelTableCompareJobRequest::toJson() const
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
bool CreateDataLevelTableCompareJobRequest::fromJson(const web::json::value& val)
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
            CreateDataLevelTableCompareJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDataLevelTableCompareJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDataLevelTableCompareJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDataLevelTableCompareJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDataLevelTableCompareJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateDataLevelTableCompareJobRequest::getJobId() const
{
    return jobId_;
}

void CreateDataLevelTableCompareJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDataLevelTableCompareJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDataLevelTableCompareJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

CreateDataLevelTableCompareJobReq CreateDataLevelTableCompareJobRequest::getBody() const
{
    return body_;
}

void CreateDataLevelTableCompareJobRequest::setBody(const CreateDataLevelTableCompareJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDataLevelTableCompareJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDataLevelTableCompareJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


