

#include "huaweicloud/modelarts/v1/model/BindDevServerPublicIPResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BindDevServerPublicIPResponse::BindDevServerPublicIPResponse()
{
    publicIpsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BindDevServerPublicIPResponse::~BindDevServerPublicIPResponse() = default;

void BindDevServerPublicIPResponse::validate()
{
}

web::json::value BindDevServerPublicIPResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BindDevServerPublicIPResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerPublicIp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ServerPublicIp>& BindDevServerPublicIPResponse::getPublicIps()
{
    return publicIps_;
}

void BindDevServerPublicIPResponse::setPublicIps(const std::vector<ServerPublicIp>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool BindDevServerPublicIPResponse::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void BindDevServerPublicIPResponse::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

std::string BindDevServerPublicIPResponse::getXRequestId() const
{
    return xRequestId_;
}

void BindDevServerPublicIPResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BindDevServerPublicIPResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BindDevServerPublicIPResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


