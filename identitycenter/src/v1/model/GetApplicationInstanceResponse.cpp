

#include "huaweicloud/identitycenter/v1/model/GetApplicationInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetApplicationInstanceResponse::GetApplicationInstanceResponse()
{
    applicationInstanceIsSet_ = false;
}

GetApplicationInstanceResponse::~GetApplicationInstanceResponse() = default;

void GetApplicationInstanceResponse::validate()
{
}

web::json::value GetApplicationInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstanceIsSet_) {
        val[utility::conversions::to_string_t("application_instance")] = ModelBase::toJson(applicationInstance_);
    }

    return val;
}
bool GetApplicationInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance"));
        if(!fieldValue.is_null())
        {
            ApplicationInstanceDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstance(refVal);
        }
    }
    return ok;
}


ApplicationInstanceDto GetApplicationInstanceResponse::getApplicationInstance() const
{
    return applicationInstance_;
}

void GetApplicationInstanceResponse::setApplicationInstance(const ApplicationInstanceDto& value)
{
    applicationInstance_ = value;
    applicationInstanceIsSet_ = true;
}

bool GetApplicationInstanceResponse::applicationInstanceIsSet() const
{
    return applicationInstanceIsSet_;
}

void GetApplicationInstanceResponse::unsetapplicationInstance()
{
    applicationInstanceIsSet_ = false;
}

}
}
}
}
}


