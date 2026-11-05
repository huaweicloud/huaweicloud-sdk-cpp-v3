

#include "huaweicloud/rds/v3/model/SwitchSupabaseApplicationEipBindRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSupabaseApplicationEipBindRequestBody::SwitchSupabaseApplicationEipBindRequestBody()
{
    isBind_ = false;
    isBindIsSet_ = false;
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
}

SwitchSupabaseApplicationEipBindRequestBody::~SwitchSupabaseApplicationEipBindRequestBody() = default;

void SwitchSupabaseApplicationEipBindRequestBody::validate()
{
}

web::json::value SwitchSupabaseApplicationEipBindRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isBindIsSet_) {
        val[utility::conversions::to_string_t("is_bind")] = ModelBase::toJson(isBind_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }

    return val;
}
bool SwitchSupabaseApplicationEipBindRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_bind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_bind"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
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


bool SwitchSupabaseApplicationEipBindRequestBody::isIsBind() const
{
    return isBind_;
}

void SwitchSupabaseApplicationEipBindRequestBody::setIsBind(bool value)
{
    isBind_ = value;
    isBindIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequestBody::isBindIsSet() const
{
    return isBindIsSet_;
}

void SwitchSupabaseApplicationEipBindRequestBody::unsetisBind()
{
    isBindIsSet_ = false;
}

std::string SwitchSupabaseApplicationEipBindRequestBody::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void SwitchSupabaseApplicationEipBindRequestBody::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequestBody::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void SwitchSupabaseApplicationEipBindRequestBody::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string SwitchSupabaseApplicationEipBindRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void SwitchSupabaseApplicationEipBindRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool SwitchSupabaseApplicationEipBindRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void SwitchSupabaseApplicationEipBindRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

}
}
}
}
}


