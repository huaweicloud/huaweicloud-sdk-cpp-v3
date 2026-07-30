

#include "huaweicloud/modelarts/v1/model/DeleteServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteServicesRequest::DeleteServicesRequest()
{
    serviceIdsIsSet_ = false;
}

DeleteServicesRequest::~DeleteServicesRequest() = default;

void DeleteServicesRequest::validate()
{
}

web::json::value DeleteServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdsIsSet_) {
        val[utility::conversions::to_string_t("service_ids")] = ModelBase::toJson(serviceIds_);
    }

    return val;
}
bool DeleteServicesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteServicesRequest::getServiceIds()
{
    return serviceIds_;
}

void DeleteServicesRequest::setServiceIds(const std::vector<std::string>& value)
{
    serviceIds_ = value;
    serviceIdsIsSet_ = true;
}

bool DeleteServicesRequest::serviceIdsIsSet() const
{
    return serviceIdsIsSet_;
}

void DeleteServicesRequest::unsetserviceIds()
{
    serviceIdsIsSet_ = false;
}

}
}
}
}
}


