

#include "huaweicloud/organizations/v1/model/ListServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListServicesResponse::ListServicesResponse()
{
    servicesIsSet_ = false;
}

ListServicesResponse::~ListServicesResponse() = default;

void ListServicesResponse::validate()
{
}

web::json::value ListServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }

    return val;
}
bool ListServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListServicesResponse::getServices()
{
    return services_;
}

void ListServicesResponse::setServices(const std::vector<std::string>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool ListServicesResponse::servicesIsSet() const
{
    return servicesIsSet_;
}

void ListServicesResponse::unsetservices()
{
    servicesIsSet_ = false;
}

}
}
}
}
}


