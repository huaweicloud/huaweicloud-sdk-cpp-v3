

#include "huaweicloud/drs/v5/model/SyncUserJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SyncUserJdbcDriverRequest::SyncUserJdbcDriverRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SyncUserJdbcDriverRequest::~SyncUserJdbcDriverRequest() = default;

void SyncUserJdbcDriverRequest::validate()
{
}

web::json::value SyncUserJdbcDriverRequest::toJson() const
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
bool SyncUserJdbcDriverRequest::fromJson(const web::json::value& val)
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
            UpdateUserDriverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SyncUserJdbcDriverRequest::getJobId() const
{
    return jobId_;
}

void SyncUserJdbcDriverRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SyncUserJdbcDriverRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SyncUserJdbcDriverRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SyncUserJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void SyncUserJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SyncUserJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SyncUserJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateUserDriverReq SyncUserJdbcDriverRequest::getBody() const
{
    return body_;
}

void SyncUserJdbcDriverRequest::setBody(const UpdateUserDriverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SyncUserJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SyncUserJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


