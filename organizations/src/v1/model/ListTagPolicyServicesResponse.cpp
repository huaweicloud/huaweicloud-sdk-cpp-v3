

#include "huaweicloud/organizations/v1/model/ListTagPolicyServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagPolicyServicesResponse::ListTagPolicyServicesResponse()
{
    servicesIsSet_ = false;
}

ListTagPolicyServicesResponse::~ListTagPolicyServicesResponse() = default;

void ListTagPolicyServicesResponse::validate()
{
}

web::json::value ListTagPolicyServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }

    return val;
}
bool ListTagPolicyServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            std::vector<TagPolicyServiceDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
        }
    }
    return ok;
}


std::vector<TagPolicyServiceDto>& ListTagPolicyServicesResponse::getServices()
{
    return services_;
}

void ListTagPolicyServicesResponse::setServices(const std::vector<TagPolicyServiceDto>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool ListTagPolicyServicesResponse::servicesIsSet() const
{
    return servicesIsSet_;
}

void ListTagPolicyServicesResponse::unsetservices()
{
    servicesIsSet_ = false;
}

}
}
}
}
}


