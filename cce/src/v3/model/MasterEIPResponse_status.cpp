

#include "huaweicloud/cce/v3/model/MasterEIPResponse_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPResponse_status::MasterEIPResponse_status()
{
    privateEndpoint_ = "";
    privateEndpointIsSet_ = false;
    publicEndpoint_ = "";
    publicEndpointIsSet_ = false;
}

MasterEIPResponse_status::~MasterEIPResponse_status() = default;

void MasterEIPResponse_status::validate()
{
}

web::json::value MasterEIPResponse_status::toJson() const
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
bool MasterEIPResponse_status::fromJson(const web::json::value& val)
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


std::string MasterEIPResponse_status::getPrivateEndpoint() const
{
    return privateEndpoint_;
}

void MasterEIPResponse_status::setPrivateEndpoint(const std::string& value)
{
    privateEndpoint_ = value;
    privateEndpointIsSet_ = true;
}

bool MasterEIPResponse_status::privateEndpointIsSet() const
{
    return privateEndpointIsSet_;
}

void MasterEIPResponse_status::unsetprivateEndpoint()
{
    privateEndpointIsSet_ = false;
}

std::string MasterEIPResponse_status::getPublicEndpoint() const
{
    return publicEndpoint_;
}

void MasterEIPResponse_status::setPublicEndpoint(const std::string& value)
{
    publicEndpoint_ = value;
    publicEndpointIsSet_ = true;
}

bool MasterEIPResponse_status::publicEndpointIsSet() const
{
    return publicEndpointIsSet_;
}

void MasterEIPResponse_status::unsetpublicEndpoint()
{
    publicEndpointIsSet_ = false;
}

}
}
}
}
}


