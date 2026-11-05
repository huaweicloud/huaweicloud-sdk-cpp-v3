

#include "huaweicloud/modelarts/v1/model/ServiceBatchOpenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceBatchOpenRequest::ServiceBatchOpenRequest()
{
    serviceListIsSet_ = false;
}

ServiceBatchOpenRequest::~ServiceBatchOpenRequest() = default;

void ServiceBatchOpenRequest::validate()
{
}

web::json::value ServiceBatchOpenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceListIsSet_) {
        val[utility::conversions::to_string_t("service_list")] = ModelBase::toJson(serviceList_);
    }

    return val;
}
bool ServiceBatchOpenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceOpenItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceList(refVal);
        }
    }
    return ok;
}


std::vector<ServiceOpenItem>& ServiceBatchOpenRequest::getServiceList()
{
    return serviceList_;
}

void ServiceBatchOpenRequest::setServiceList(const std::vector<ServiceOpenItem>& value)
{
    serviceList_ = value;
    serviceListIsSet_ = true;
}

bool ServiceBatchOpenRequest::serviceListIsSet() const
{
    return serviceListIsSet_;
}

void ServiceBatchOpenRequest::unsetserviceList()
{
    serviceListIsSet_ = false;
}

}
}
}
}
}


