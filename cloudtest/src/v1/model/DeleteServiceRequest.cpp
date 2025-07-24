

#include "huaweicloud/cloudtest/v1/model/DeleteServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteServiceRequest::DeleteServiceRequest()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
}

DeleteServiceRequest::~DeleteServiceRequest() = default;

void DeleteServiceRequest::validate()
{
}

web::json::value DeleteServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool DeleteServiceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    return ok;
}


int32_t DeleteServiceRequest::getServiceId() const
{
    return serviceId_;
}

void DeleteServiceRequest::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool DeleteServiceRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void DeleteServiceRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


