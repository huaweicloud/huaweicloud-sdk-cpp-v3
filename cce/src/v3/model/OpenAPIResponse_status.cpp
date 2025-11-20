

#include "huaweicloud/cce/v3/model/OpenAPIResponse_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




OpenAPIResponse_status::OpenAPIResponse_status()
{
    privateEndpoint_ = "";
    privateEndpointIsSet_ = false;
    publicEndpoint_ = "";
    publicEndpointIsSet_ = false;
}

OpenAPIResponse_status::~OpenAPIResponse_status() = default;

void OpenAPIResponse_status::validate()
{
}

web::json::value OpenAPIResponse_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateEndpointIsSet_) {
        val[utility::conversions::to_string_t("privateEndpoint")] = ModelBase::toJson(privateEndpoint_);
    }
    if(publicEndpointIsSet_) {
        val[utility::conversions::to_string_t("publicEndpoint")] = ModelBase::toJson(publicEndpoint_);
    }

    return val;
}
bool OpenAPIResponse_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privateEndpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateEndpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicEndpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicEndpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicEndpoint(refVal);
        }
    }
    return ok;
}


std::string OpenAPIResponse_status::getPrivateEndpoint() const
{
    return privateEndpoint_;
}

void OpenAPIResponse_status::setPrivateEndpoint(const std::string& value)
{
    privateEndpoint_ = value;
    privateEndpointIsSet_ = true;
}

bool OpenAPIResponse_status::privateEndpointIsSet() const
{
    return privateEndpointIsSet_;
}

void OpenAPIResponse_status::unsetprivateEndpoint()
{
    privateEndpointIsSet_ = false;
}

std::string OpenAPIResponse_status::getPublicEndpoint() const
{
    return publicEndpoint_;
}

void OpenAPIResponse_status::setPublicEndpoint(const std::string& value)
{
    publicEndpoint_ = value;
    publicEndpointIsSet_ = true;
}

bool OpenAPIResponse_status::publicEndpointIsSet() const
{
    return publicEndpointIsSet_;
}

void OpenAPIResponse_status::unsetpublicEndpoint()
{
    publicEndpointIsSet_ = false;
}

}
}
}
}
}


