

#include "huaweicloud/drs/v5/model/UpdateReplicationJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateReplicationJobRequest::UpdateReplicationJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateReplicationJobRequest::~UpdateReplicationJobRequest() = default;

void UpdateReplicationJobRequest::validate()
{
}

web::json::value UpdateReplicationJobRequest::toJson() const
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
bool UpdateReplicationJobRequest::fromJson(const web::json::value& val)
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
            ModifyOfflineTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateReplicationJobRequest::getJobId() const
{
    return jobId_;
}

void UpdateReplicationJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateReplicationJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateReplicationJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateReplicationJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateReplicationJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateReplicationJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateReplicationJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyOfflineTaskReq UpdateReplicationJobRequest::getBody() const
{
    return body_;
}

void UpdateReplicationJobRequest::setBody(const ModifyOfflineTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateReplicationJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateReplicationJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


