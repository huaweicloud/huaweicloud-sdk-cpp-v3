

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostFromEnvironmentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostFromEnvironmentRequest::DeleteHostFromEnvironmentRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
}

DeleteHostFromEnvironmentRequest::~DeleteHostFromEnvironmentRequest() = default;

void DeleteHostFromEnvironmentRequest::validate()
{
}

web::json::value DeleteHostFromEnvironmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }

    return val;
}

bool DeleteHostFromEnvironmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    return ok;
}

std::string DeleteHostFromEnvironmentRequest::getApplicationId() const
{
    return applicationId_;
}

void DeleteHostFromEnvironmentRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool DeleteHostFromEnvironmentRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void DeleteHostFromEnvironmentRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string DeleteHostFromEnvironmentRequest::getEnvironmentId() const
{
    return environmentId_;
}

void DeleteHostFromEnvironmentRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool DeleteHostFromEnvironmentRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void DeleteHostFromEnvironmentRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::string DeleteHostFromEnvironmentRequest::getHostId() const
{
    return hostId_;
}

void DeleteHostFromEnvironmentRequest::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool DeleteHostFromEnvironmentRequest::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void DeleteHostFromEnvironmentRequest::unsethostId()
{
    hostIdIsSet_ = false;
}

}
}
}
}
}


