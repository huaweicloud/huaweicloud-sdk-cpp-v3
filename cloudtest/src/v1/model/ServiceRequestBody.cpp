

#include "huaweicloud/cloudtest/v1/model/ServiceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ServiceRequestBody::ServiceRequestBody()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    serverHost_ = "";
    serverHostIsSet_ = false;
}

ServiceRequestBody::~ServiceRequestBody() = default;

void ServiceRequestBody::validate()
{
}

web::json::value ServiceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(serverHostIsSet_) {
        val[utility::conversions::to_string_t("server_host")] = ModelBase::toJson(serverHost_);
    }

    return val;
}
bool ServiceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("server_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerHost(refVal);
        }
    }
    return ok;
}


std::string ServiceRequestBody::getServiceName() const
{
    return serviceName_;
}

void ServiceRequestBody::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ServiceRequestBody::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ServiceRequestBody::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string ServiceRequestBody::getServerHost() const
{
    return serverHost_;
}

void ServiceRequestBody::setServerHost(const std::string& value)
{
    serverHost_ = value;
    serverHostIsSet_ = true;
}

bool ServiceRequestBody::serverHostIsSet() const
{
    return serverHostIsSet_;
}

void ServiceRequestBody::unsetserverHost()
{
    serverHostIsSet_ = false;
}

}
}
}
}
}


