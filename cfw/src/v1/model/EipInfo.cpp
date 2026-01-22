

#include "huaweicloud/cfw/v1/model/EipInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipInfo::EipInfo()
{
    eipId_ = "";
    eipIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    publicIpv6_ = "";
    publicIpv6IsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

EipInfo::~EipInfo() = default;

void EipInfo::validate()
{
}

web::json::value EipInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIdIsSet_) {
        val[utility::conversions::to_string_t("eip_id")] = ModelBase::toJson(eipId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(publicIpv6IsSet_) {
        val[utility::conversions::to_string_t("public_ipv6")] = ModelBase::toJson(publicIpv6_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool EipInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string EipInfo::getEipId() const
{
    return eipId_;
}

void EipInfo::setEipId(const std::string& value)
{
    eipId_ = value;
    eipIdIsSet_ = true;
}

bool EipInfo::eipIdIsSet() const
{
    return eipIdIsSet_;
}

void EipInfo::unseteipId()
{
    eipIdIsSet_ = false;
}

std::string EipInfo::getFwInstanceId() const
{
    return fwInstanceId_;
}

void EipInfo::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool EipInfo::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void EipInfo::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string EipInfo::getObjectId() const
{
    return objectId_;
}

void EipInfo::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool EipInfo::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void EipInfo::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string EipInfo::getPublicIp() const
{
    return publicIp_;
}

void EipInfo::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool EipInfo::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void EipInfo::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string EipInfo::getPublicIpv6() const
{
    return publicIpv6_;
}

void EipInfo::setPublicIpv6(const std::string& value)
{
    publicIpv6_ = value;
    publicIpv6IsSet_ = true;
}

bool EipInfo::publicIpv6IsSet() const
{
    return publicIpv6IsSet_;
}

void EipInfo::unsetpublicIpv6()
{
    publicIpv6IsSet_ = false;
}

int32_t EipInfo::getType() const
{
    return type_;
}

void EipInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool EipInfo::typeIsSet() const
{
    return typeIsSet_;
}

void EipInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


