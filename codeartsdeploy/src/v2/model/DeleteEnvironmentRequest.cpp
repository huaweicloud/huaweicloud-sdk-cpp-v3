

#include "huaweicloud/codeartsdeploy/v2/model/DeleteEnvironmentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteEnvironmentRequest::DeleteEnvironmentRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
}

DeleteEnvironmentRequest::~DeleteEnvironmentRequest() = default;

void DeleteEnvironmentRequest::validate()
{
}

web::json::value DeleteEnvironmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }

    return val;
}

bool DeleteEnvironmentRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteEnvironmentRequest::getApplicationId() const
{
    return applicationId_;
}

void DeleteEnvironmentRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool DeleteEnvironmentRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void DeleteEnvironmentRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string DeleteEnvironmentRequest::getEnvironmentId() const
{
    return environmentId_;
}

void DeleteEnvironmentRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool DeleteEnvironmentRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void DeleteEnvironmentRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

}
}
}
}
}


