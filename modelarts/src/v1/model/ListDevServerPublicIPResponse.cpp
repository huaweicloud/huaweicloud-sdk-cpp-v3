

#include "huaweicloud/modelarts/v1/model/ListDevServerPublicIPResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerPublicIPResponse::ListDevServerPublicIPResponse()
{
    publicIpsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListDevServerPublicIPResponse::~ListDevServerPublicIPResponse() = default;

void ListDevServerPublicIPResponse::validate()
{
}

web::json::value ListDevServerPublicIPResponse::toJson() const
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
bool ListDevServerPublicIPResponse::fromJson(const web::json::value& val)
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


std::vector<ServerPublicIp>& ListDevServerPublicIPResponse::getPublicIps()
{
    return publicIps_;
}

void ListDevServerPublicIPResponse::setPublicIps(const std::vector<ServerPublicIp>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool ListDevServerPublicIPResponse::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void ListDevServerPublicIPResponse::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

std::string ListDevServerPublicIPResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListDevServerPublicIPResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListDevServerPublicIPResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListDevServerPublicIPResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


