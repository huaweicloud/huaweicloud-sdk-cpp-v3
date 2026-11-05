

#include "huaweicloud/modelarts/v1/model/ListServiceStatusesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListServiceStatusesRequest::ListServiceStatusesRequest()
{
    serviceCodes_ = "";
    serviceCodesIsSet_ = false;
}

ListServiceStatusesRequest::~ListServiceStatusesRequest() = default;

void ListServiceStatusesRequest::validate()
{
}

web::json::value ListServiceStatusesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceCodesIsSet_) {
        val[utility::conversions::to_string_t("service_codes")] = ModelBase::toJson(serviceCodes_);
    }

    return val;
}
bool ListServiceStatusesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_codes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceCodes(refVal);
        }
    }
    return ok;
}


std::string ListServiceStatusesRequest::getServiceCodes() const
{
    return serviceCodes_;
}

void ListServiceStatusesRequest::setServiceCodes(const std::string& value)
{
    serviceCodes_ = value;
    serviceCodesIsSet_ = true;
}

bool ListServiceStatusesRequest::serviceCodesIsSet() const
{
    return serviceCodesIsSet_;
}

void ListServiceStatusesRequest::unsetserviceCodes()
{
    serviceCodesIsSet_ = false;
}

}
}
}
}
}


