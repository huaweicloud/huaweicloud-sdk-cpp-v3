

#include "huaweicloud/rds/v3/model/BindEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BindEipRequest::BindEipRequest()
{
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    isBind_ = false;
    isBindIsSet_ = false;
}

BindEipRequest::~BindEipRequest() = default;

void BindEipRequest::validate()
{
}

web::json::value BindEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(isBindIsSet_) {
        val[utility::conversions::to_string_t("is_bind")] = ModelBase::toJson(isBind_);
    }

    return val;
}
bool BindEipRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_bind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_bind"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBind(refVal);
        }
    }
    return ok;
}


std::string BindEipRequest::getPublicIp() const
{
    return publicIp_;
}

void BindEipRequest::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool BindEipRequest::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void BindEipRequest::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string BindEipRequest::getPublicIpId() const
{
    return publicIpId_;
}

void BindEipRequest::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindEipRequest::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindEipRequest::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

bool BindEipRequest::isIsBind() const
{
    return isBind_;
}

void BindEipRequest::setIsBind(bool value)
{
    isBind_ = value;
    isBindIsSet_ = true;
}

bool BindEipRequest::isBindIsSet() const
{
    return isBindIsSet_;
}

void BindEipRequest::unsetisBind()
{
    isBindIsSet_ = false;
}

}
}
}
}
}


