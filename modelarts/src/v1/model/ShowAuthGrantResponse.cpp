

#include "huaweicloud/modelarts/v1/model/ShowAuthGrantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAuthGrantResponse::ShowAuthGrantResponse()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    status_ = false;
    statusIsSet_ = false;
}

ShowAuthGrantResponse::~ShowAuthGrantResponse() = default;

void ShowAuthGrantResponse::validate()
{
}

web::json::value ShowAuthGrantResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowAuthGrantResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowAuthGrantResponse::getServiceName() const
{
    return serviceName_;
}

void ShowAuthGrantResponse::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ShowAuthGrantResponse::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ShowAuthGrantResponse::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

bool ShowAuthGrantResponse::isStatus() const
{
    return status_;
}

void ShowAuthGrantResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAuthGrantResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAuthGrantResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


