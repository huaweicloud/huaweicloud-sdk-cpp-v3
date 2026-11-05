

#include "huaweicloud/modelarts/v1/model/BatchCreateServiceOpensResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchCreateServiceOpensResponse::BatchCreateServiceOpensResponse()
{
    serviceListIsSet_ = false;
}

BatchCreateServiceOpensResponse::~BatchCreateServiceOpensResponse() = default;

void BatchCreateServiceOpensResponse::validate()
{
}

web::json::value BatchCreateServiceOpensResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceListIsSet_) {
        val[utility::conversions::to_string_t("service_list")] = ModelBase::toJson(serviceList_);
    }

    return val;
}
bool BatchCreateServiceOpensResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceStatusItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceList(refVal);
        }
    }
    return ok;
}


std::vector<ServiceStatusItem>& BatchCreateServiceOpensResponse::getServiceList()
{
    return serviceList_;
}

void BatchCreateServiceOpensResponse::setServiceList(const std::vector<ServiceStatusItem>& value)
{
    serviceList_ = value;
    serviceListIsSet_ = true;
}

bool BatchCreateServiceOpensResponse::serviceListIsSet() const
{
    return serviceListIsSet_;
}

void BatchCreateServiceOpensResponse::unsetserviceList()
{
    serviceListIsSet_ = false;
}

}
}
}
}
}


