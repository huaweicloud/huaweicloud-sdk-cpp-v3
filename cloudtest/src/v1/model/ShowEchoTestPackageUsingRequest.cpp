

#include "huaweicloud/cloudtest/v1/model/ShowEchoTestPackageUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowEchoTestPackageUsingRequest::ShowEchoTestPackageUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
}

ShowEchoTestPackageUsingRequest::~ShowEchoTestPackageUsingRequest() = default;

void ShowEchoTestPackageUsingRequest::validate()
{
}

web::json::value ShowEchoTestPackageUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool ShowEchoTestPackageUsingRequest::fromJson(const web::json::value& val)
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


std::string ShowEchoTestPackageUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ShowEchoTestPackageUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowEchoTestPackageUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowEchoTestPackageUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


