

#include "huaweicloud/cloudtest/v1/model/ShowOperationalDataCurrentMonthUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowOperationalDataCurrentMonthUsingRequest::ShowOperationalDataCurrentMonthUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
}

ShowOperationalDataCurrentMonthUsingRequest::~ShowOperationalDataCurrentMonthUsingRequest() = default;

void ShowOperationalDataCurrentMonthUsingRequest::validate()
{
}

web::json::value ShowOperationalDataCurrentMonthUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool ShowOperationalDataCurrentMonthUsingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowOperationalDataCurrentMonthUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ShowOperationalDataCurrentMonthUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowOperationalDataCurrentMonthUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowOperationalDataCurrentMonthUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


