

#include "huaweicloud/modelarts/v1/model/ListServiceStatusesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListServiceStatusesResponse::ListServiceStatusesResponse()
{
    serviceListIsSet_ = false;
}

ListServiceStatusesResponse::~ListServiceStatusesResponse() = default;

void ListServiceStatusesResponse::validate()
{
}

web::json::value ListServiceStatusesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceListIsSet_) {
        val[utility::conversions::to_string_t("service_list")] = ModelBase::toJson(serviceList_);
    }

    return val;
}
bool ListServiceStatusesResponse::fromJson(const web::json::value& val)
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


std::vector<ServiceStatusItem>& ListServiceStatusesResponse::getServiceList()
{
    return serviceList_;
}

void ListServiceStatusesResponse::setServiceList(const std::vector<ServiceStatusItem>& value)
{
    serviceList_ = value;
    serviceListIsSet_ = true;
}

bool ListServiceStatusesResponse::serviceListIsSet() const
{
    return serviceListIsSet_;
}

void ListServiceStatusesResponse::unsetserviceList()
{
    serviceListIsSet_ = false;
}

}
}
}
}
}


