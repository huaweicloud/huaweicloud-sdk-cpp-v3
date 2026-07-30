

#include "huaweicloud/modelarts/v1/model/ServerBindPublicIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerBindPublicIPRequest::ServerBindPublicIPRequest()
{
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
}

ServerBindPublicIPRequest::~ServerBindPublicIPRequest() = default;

void ServerBindPublicIPRequest::validate()
{
}

web::json::value ServerBindPublicIPRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }

    return val;
}
bool ServerBindPublicIPRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    return ok;
}


std::string ServerBindPublicIPRequest::getPublicIpId() const
{
    return publicIpId_;
}

void ServerBindPublicIPRequest::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool ServerBindPublicIPRequest::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void ServerBindPublicIPRequest::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

}
}
}
}
}


