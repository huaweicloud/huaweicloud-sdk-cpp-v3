

#include "huaweicloud/codeartsdeploy/v2/model/ShowEnvironmentDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowEnvironmentDetailRequest::ShowEnvironmentDetailRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
}

ShowEnvironmentDetailRequest::~ShowEnvironmentDetailRequest() = default;

void ShowEnvironmentDetailRequest::validate()
{
}

web::json::value ShowEnvironmentDetailRequest::toJson() const
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
bool ShowEnvironmentDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowEnvironmentDetailRequest::getApplicationId() const
{
    return applicationId_;
}

void ShowEnvironmentDetailRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ShowEnvironmentDetailRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ShowEnvironmentDetailRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ShowEnvironmentDetailRequest::getEnvironmentId() const
{
    return environmentId_;
}

void ShowEnvironmentDetailRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool ShowEnvironmentDetailRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void ShowEnvironmentDetailRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

}
}
}
}
}


