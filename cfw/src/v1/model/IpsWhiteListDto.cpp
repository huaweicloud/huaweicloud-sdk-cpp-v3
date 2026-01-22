

#include "huaweicloud/cfw/v1/model/IpsWhiteListDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsWhiteListDto::IpsWhiteListDto()
{
    sourceAddress_ = "";
    sourceAddressIsSet_ = false;
    destAddress_ = "";
    destAddressIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    effectiveScopesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IpsWhiteListDto::~IpsWhiteListDto() = default;

void IpsWhiteListDto::validate()
{
}

web::json::value IpsWhiteListDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceAddressIsSet_) {
        val[utility::conversions::to_string_t("source_address")] = ModelBase::toJson(sourceAddress_);
    }
    if(destAddressIsSet_) {
        val[utility::conversions::to_string_t("dest_address")] = ModelBase::toJson(destAddress_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(effectiveScopesIsSet_) {
        val[utility::conversions::to_string_t("effective_scopes")] = ModelBase::toJson(effectiveScopes_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool IpsWhiteListDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_scopes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_scopes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveScopes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string IpsWhiteListDto::getSourceAddress() const
{
    return sourceAddress_;
}

void IpsWhiteListDto::setSourceAddress(const std::string& value)
{
    sourceAddress_ = value;
    sourceAddressIsSet_ = true;
}

bool IpsWhiteListDto::sourceAddressIsSet() const
{
    return sourceAddressIsSet_;
}

void IpsWhiteListDto::unsetsourceAddress()
{
    sourceAddressIsSet_ = false;
}

std::string IpsWhiteListDto::getDestAddress() const
{
    return destAddress_;
}

void IpsWhiteListDto::setDestAddress(const std::string& value)
{
    destAddress_ = value;
    destAddressIsSet_ = true;
}

bool IpsWhiteListDto::destAddressIsSet() const
{
    return destAddressIsSet_;
}

void IpsWhiteListDto::unsetdestAddress()
{
    destAddressIsSet_ = false;
}

int32_t IpsWhiteListDto::getIpVersion() const
{
    return ipVersion_;
}

void IpsWhiteListDto::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool IpsWhiteListDto::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void IpsWhiteListDto::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string IpsWhiteListDto::getName() const
{
    return name_;
}

void IpsWhiteListDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IpsWhiteListDto::nameIsSet() const
{
    return nameIsSet_;
}

void IpsWhiteListDto::unsetname()
{
    nameIsSet_ = false;
}

std::string IpsWhiteListDto::getIpsId() const
{
    return ipsId_;
}

void IpsWhiteListDto::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool IpsWhiteListDto::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void IpsWhiteListDto::unsetipsId()
{
    ipsIdIsSet_ = false;
}

std::vector<std::string>& IpsWhiteListDto::getEffectiveScopes()
{
    return effectiveScopes_;
}

void IpsWhiteListDto::setEffectiveScopes(const std::vector<std::string>& value)
{
    effectiveScopes_ = value;
    effectiveScopesIsSet_ = true;
}

bool IpsWhiteListDto::effectiveScopesIsSet() const
{
    return effectiveScopesIsSet_;
}

void IpsWhiteListDto::unseteffectiveScopes()
{
    effectiveScopesIsSet_ = false;
}

std::string IpsWhiteListDto::getDescription() const
{
    return description_;
}

void IpsWhiteListDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpsWhiteListDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpsWhiteListDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


