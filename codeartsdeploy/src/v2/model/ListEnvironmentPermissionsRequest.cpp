

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentPermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentPermissionsRequest::ListEnvironmentPermissionsRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
}

ListEnvironmentPermissionsRequest::~ListEnvironmentPermissionsRequest() = default;

void ListEnvironmentPermissionsRequest::validate()
{
}

web::json::value ListEnvironmentPermissionsRequest::toJson() const
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
bool ListEnvironmentPermissionsRequest::fromJson(const web::json::value& val)
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


std::string ListEnvironmentPermissionsRequest::getApplicationId() const
{
    return applicationId_;
}

void ListEnvironmentPermissionsRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListEnvironmentPermissionsRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListEnvironmentPermissionsRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ListEnvironmentPermissionsRequest::getEnvironmentId() const
{
    return environmentId_;
}

void ListEnvironmentPermissionsRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool ListEnvironmentPermissionsRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void ListEnvironmentPermissionsRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

}
}
}
}
}


