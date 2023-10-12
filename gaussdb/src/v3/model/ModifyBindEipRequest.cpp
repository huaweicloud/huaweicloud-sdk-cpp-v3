

#include "huaweicloud/gaussdb/v3/model/ModifyBindEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyBindEipRequest::ModifyBindEipRequest()
{
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
}

ModifyBindEipRequest::~ModifyBindEipRequest() = default;

void ModifyBindEipRequest::validate()
{
}

web::json::value ModifyBindEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }

    return val;
}
bool ModifyBindEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
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


std::string ModifyBindEipRequest::getPublicIp() const
{
    return publicIp_;
}

void ModifyBindEipRequest::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool ModifyBindEipRequest::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void ModifyBindEipRequest::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string ModifyBindEipRequest::getPublicIpId() const
{
    return publicIpId_;
}

void ModifyBindEipRequest::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool ModifyBindEipRequest::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void ModifyBindEipRequest::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

}
}
}
}
}


