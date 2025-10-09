

#include "huaweicloud/gaussdb/v3/model/ShowTaskDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaskDetailsRequest::ShowTaskDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
}

ShowTaskDetailsRequest::~ShowTaskDetailsRequest() = default;

void ShowTaskDetailsRequest::validate()
{
}

web::json::value ShowTaskDetailsRequest::toJson() const
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
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }

    return val;
}
bool ShowTaskDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTaskDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTaskDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTaskDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowTaskDetailsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTaskDetailsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaskDetailsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaskDetailsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTaskDetailsRequest::getJobId() const
{
    return jobId_;
}

void ShowTaskDetailsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTaskDetailsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTaskDetailsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTaskDetailsRequest::getJobName() const
{
    return jobName_;
}

void ShowTaskDetailsRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ShowTaskDetailsRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ShowTaskDetailsRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

}
}
}
}
}


