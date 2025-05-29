

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyEipRequestBody::SwitchGaussMySqlProxyEipRequestBody()
{
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    bind_ = "";
    bindIsSet_ = false;
}

SwitchGaussMySqlProxyEipRequestBody::~SwitchGaussMySqlProxyEipRequestBody() = default;

void SwitchGaussMySqlProxyEipRequestBody::validate()
{
}

web::json::value SwitchGaussMySqlProxyEipRequestBody::toJson() const
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
bool SwitchGaussMySqlProxyEipRequestBody::fromJson(const web::json::value& val)
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


std::string SwitchGaussMySqlProxyEipRequestBody::getPublicIp() const
{
    return publicIp_;
}

void SwitchGaussMySqlProxyEipRequestBody::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequestBody::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void SwitchGaussMySqlProxyEipRequestBody::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string SwitchGaussMySqlProxyEipRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void SwitchGaussMySqlProxyEipRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void SwitchGaussMySqlProxyEipRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string SwitchGaussMySqlProxyEipRequestBody::getBind() const
{
    return bind_;
}

void SwitchGaussMySqlProxyEipRequestBody::setBind(const std::string& value)
{
    bind_ = value;
    bindIsSet_ = true;
}

bool SwitchGaussMySqlProxyEipRequestBody::bindIsSet() const
{
    return bindIsSet_;
}

void SwitchGaussMySqlProxyEipRequestBody::unsetbind()
{
    bindIsSet_ = false;
}

}
}
}
}
}


