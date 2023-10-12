

#include "huaweicloud/rds/v3/model/ApplyConfigurationAsyncResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplyConfigurationAsyncResponse::ApplyConfigurationAsyncResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
    configurationName_ = "";
    configurationNameIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ApplyConfigurationAsyncResponse::~ApplyConfigurationAsyncResponse() = default;

void ApplyConfigurationAsyncResponse::validate()
{
}

web::json::value ApplyConfigurationAsyncResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(configurationNameIsSet_) {
        val[utility::conversions::to_string_t("configuration_name")] = ModelBase::toJson(configurationName_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ApplyConfigurationAsyncResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
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


std::string ApplyConfigurationAsyncResponse::getConfigurationId() const
{
    return configurationId_;
}

void ApplyConfigurationAsyncResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool ApplyConfigurationAsyncResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void ApplyConfigurationAsyncResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string ApplyConfigurationAsyncResponse::getConfigurationName() const
{
    return configurationName_;
}

void ApplyConfigurationAsyncResponse::setConfigurationName(const std::string& value)
{
    configurationName_ = value;
    configurationNameIsSet_ = true;
}

bool ApplyConfigurationAsyncResponse::configurationNameIsSet() const
{
    return configurationNameIsSet_;
}

void ApplyConfigurationAsyncResponse::unsetconfigurationName()
{
    configurationNameIsSet_ = false;
}

bool ApplyConfigurationAsyncResponse::isSuccess() const
{
    return success_;
}

void ApplyConfigurationAsyncResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ApplyConfigurationAsyncResponse::successIsSet() const
{
    return successIsSet_;
}

void ApplyConfigurationAsyncResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string ApplyConfigurationAsyncResponse::getJobId() const
{
    return jobId_;
}

void ApplyConfigurationAsyncResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ApplyConfigurationAsyncResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ApplyConfigurationAsyncResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


