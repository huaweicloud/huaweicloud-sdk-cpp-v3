

#include "huaweicloud/live/v1/model/BatchShowIpBelongsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




BatchShowIpBelongsRequest::BatchShowIpBelongsRequest()
{
    ipIsSet_ = false;
}

BatchShowIpBelongsRequest::~BatchShowIpBelongsRequest() = default;

void BatchShowIpBelongsRequest::validate()
{
}

web::json::value BatchShowIpBelongsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}
bool BatchShowIpBelongsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchShowIpBelongsRequest::getIp()
{
    return ip_;
}

void BatchShowIpBelongsRequest::setIp(const std::vector<std::string>& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BatchShowIpBelongsRequest::ipIsSet() const
{
    return ipIsSet_;
}

void BatchShowIpBelongsRequest::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


