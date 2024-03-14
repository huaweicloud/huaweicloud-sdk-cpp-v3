

#include "huaweicloud/drs/v5/model/PublicIpConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PublicIpConfig::PublicIpConfig()
{
    id_ = "";
    idIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PublicIpConfig::~PublicIpConfig() = default;

void PublicIpConfig::validate()
{
}

web::json::value PublicIpConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PublicIpConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string PublicIpConfig::getId() const
{
    return id_;
}

void PublicIpConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicIpConfig::idIsSet() const
{
    return idIsSet_;
}

void PublicIpConfig::unsetid()
{
    idIsSet_ = false;
}

std::string PublicIpConfig::getPublicIp() const
{
    return publicIp_;
}

void PublicIpConfig::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool PublicIpConfig::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void PublicIpConfig::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string PublicIpConfig::getType() const
{
    return type_;
}

void PublicIpConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicIpConfig::typeIsSet() const
{
    return typeIsSet_;
}

void PublicIpConfig::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


