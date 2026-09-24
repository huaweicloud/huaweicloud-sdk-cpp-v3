

#include "huaweicloud/rds/v3/model/SwitchMySqlProxyEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchMySqlProxyEipRequestBody::SwitchMySqlProxyEipRequestBody()
{
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    bind_ = "";
    bindIsSet_ = false;
}

SwitchMySqlProxyEipRequestBody::~SwitchMySqlProxyEipRequestBody() = default;

void SwitchMySqlProxyEipRequestBody::validate()
{
}

web::json::value SwitchMySqlProxyEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(bindIsSet_) {
        val[utility::conversions::to_string_t("bind")] = ModelBase::toJson(bind_);
    }

    return val;
}
bool SwitchMySqlProxyEipRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBind(refVal);
        }
    }
    return ok;
}


std::string SwitchMySqlProxyEipRequestBody::getPublicIp() const
{
    return publicIp_;
}

void SwitchMySqlProxyEipRequestBody::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool SwitchMySqlProxyEipRequestBody::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void SwitchMySqlProxyEipRequestBody::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string SwitchMySqlProxyEipRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void SwitchMySqlProxyEipRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool SwitchMySqlProxyEipRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void SwitchMySqlProxyEipRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string SwitchMySqlProxyEipRequestBody::getBind() const
{
    return bind_;
}

void SwitchMySqlProxyEipRequestBody::setBind(const std::string& value)
{
    bind_ = value;
    bindIsSet_ = true;
}

bool SwitchMySqlProxyEipRequestBody::bindIsSet() const
{
    return bindIsSet_;
}

void SwitchMySqlProxyEipRequestBody::unsetbind()
{
    bindIsSet_ = false;
}

}
}
}
}
}


