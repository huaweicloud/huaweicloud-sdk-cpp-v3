

#include "huaweicloud/rds/v3/model/SwitchDbAgentJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchDbAgentJobRequest::SwitchDbAgentJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchDbAgentJobRequest::~SwitchDbAgentJobRequest() = default;

void SwitchDbAgentJobRequest::validate()
{
}

web::json::value SwitchDbAgentJobRequest::toJson() const
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
bool SwitchDbAgentJobRequest::fromJson(const web::json::value& val)
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


std::string SwitchDbAgentJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchDbAgentJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchDbAgentJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchDbAgentJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchDbAgentJobRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchDbAgentJobRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchDbAgentJobRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchDbAgentJobRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchDbAgentJobRequest::getJobId() const
{
    return jobId_;
}

void SwitchDbAgentJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchDbAgentJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchDbAgentJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


