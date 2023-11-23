

#include "huaweicloud/drs/v5/model/SyncJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SyncJdbcDriverRequest::SyncJdbcDriverRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SyncJdbcDriverRequest::~SyncJdbcDriverRequest() = default;

void SyncJdbcDriverRequest::validate()
{
}

web::json::value SyncJdbcDriverRequest::toJson() const
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
bool SyncJdbcDriverRequest::fromJson(const web::json::value& val)
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
            UpdateDriverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SyncJdbcDriverRequest::getJobId() const
{
    return jobId_;
}

void SyncJdbcDriverRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SyncJdbcDriverRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SyncJdbcDriverRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SyncJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void SyncJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SyncJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SyncJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateDriverReq SyncJdbcDriverRequest::getBody() const
{
    return body_;
}

void SyncJdbcDriverRequest::setBody(const UpdateDriverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SyncJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SyncJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


