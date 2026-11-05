

#include "huaweicloud/modelarts/v1/model/AgencyServices.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AgencyServices::AgencyServices()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    actionsIsSet_ = false;
}

AgencyServices::~AgencyServices() = default;

void AgencyServices::validate()
{
}

web::json::value AgencyServices::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool AgencyServices::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::string AgencyServices::getServiceId() const
{
    return serviceId_;
}

void AgencyServices::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AgencyServices::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AgencyServices::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::vector<std::string>& AgencyServices::getActions()
{
    return actions_;
}

void AgencyServices::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool AgencyServices::actionsIsSet() const
{
    return actionsIsSet_;
}

void AgencyServices::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


