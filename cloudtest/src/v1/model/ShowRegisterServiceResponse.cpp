

#include "huaweicloud/cloudtest/v1/model/ShowRegisterServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowRegisterServiceResponse::ShowRegisterServiceResponse()
{
    servicesIsSet_ = false;
}

ShowRegisterServiceResponse::~ShowRegisterServiceResponse() = default;

void ShowRegisterServiceResponse::validate()
{
}

web::json::value ShowRegisterServiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }

    return val;
}
bool ShowRegisterServiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            std::vector<ServicesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
        }
    }
    return ok;
}


std::vector<ServicesInfo>& ShowRegisterServiceResponse::getServices()
{
    return services_;
}

void ShowRegisterServiceResponse::setServices(const std::vector<ServicesInfo>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool ShowRegisterServiceResponse::servicesIsSet() const
{
    return servicesIsSet_;
}

void ShowRegisterServiceResponse::unsetservices()
{
    servicesIsSet_ = false;
}

}
}
}
}
}


