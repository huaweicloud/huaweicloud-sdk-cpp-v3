

#include "huaweicloud/rds/v3/model/RestartDbAgentJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartDbAgentJobRequest::RestartDbAgentJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartDbAgentJobRequest::~RestartDbAgentJobRequest() = default;

void RestartDbAgentJobRequest::validate()
{
}

web::json::value RestartDbAgentJobRequest::toJson() const
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

    return val;
}
bool RestartDbAgentJobRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RestartDbAgentJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartDbAgentJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartDbAgentJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartDbAgentJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RestartDbAgentJobRequest::getInstanceId() const
{
    return instanceId_;
}

void RestartDbAgentJobRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestartDbAgentJobRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestartDbAgentJobRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestartDbAgentJobRequest::getJobId() const
{
    return jobId_;
}

void RestartDbAgentJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartDbAgentJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartDbAgentJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


