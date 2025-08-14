

#include "huaweicloud/identitycenter/v1/model/CreateApplicationInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreateApplicationInstanceResponse::CreateApplicationInstanceResponse()
{
    applicationInstanceIsSet_ = false;
}

CreateApplicationInstanceResponse::~CreateApplicationInstanceResponse() = default;

void CreateApplicationInstanceResponse::validate()
{
}

web::json::value CreateApplicationInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstanceIsSet_) {
        val[utility::conversions::to_string_t("application_instance")] = ModelBase::toJson(applicationInstance_);
    }

    return val;
}
bool CreateApplicationInstanceResponse::fromJson(const web::json::value& val)
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


ApplicationInstanceDto CreateApplicationInstanceResponse::getApplicationInstance() const
{
    return applicationInstance_;
}

void CreateApplicationInstanceResponse::setApplicationInstance(const ApplicationInstanceDto& value)
{
    applicationInstance_ = value;
    applicationInstanceIsSet_ = true;
}

bool CreateApplicationInstanceResponse::applicationInstanceIsSet() const
{
    return applicationInstanceIsSet_;
}

void CreateApplicationInstanceResponse::unsetapplicationInstance()
{
    applicationInstanceIsSet_ = false;
}

}
}
}
}
}


