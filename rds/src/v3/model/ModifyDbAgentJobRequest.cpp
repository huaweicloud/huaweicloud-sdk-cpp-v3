

#include "huaweicloud/rds/v3/model/ModifyDbAgentJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyDbAgentJobRequest::ModifyDbAgentJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyDbAgentJobRequest::~ModifyDbAgentJobRequest() = default;

void ModifyDbAgentJobRequest::validate()
{
}

web::json::value ModifyDbAgentJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyDbAgentJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
            ModifyDbAgentJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyDbAgentJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyDbAgentJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyDbAgentJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyDbAgentJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyDbAgentJobRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyDbAgentJobRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyDbAgentJobRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyDbAgentJobRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyDbAgentJobRequest::getJobId() const
{
    return jobId_;
}

void ModifyDbAgentJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyDbAgentJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyDbAgentJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

ModifyDbAgentJobRequestBody ModifyDbAgentJobRequest::getBody() const
{
    return body_;
}

void ModifyDbAgentJobRequest::setBody(const ModifyDbAgentJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyDbAgentJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyDbAgentJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


