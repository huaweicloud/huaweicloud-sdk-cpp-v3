

#include "huaweicloud/cfw/v1/model/UpdateIpsWhitelistDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateIpsWhitelistDto::UpdateIpsWhitelistDto()
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

UpdateIpsWhitelistDto::~UpdateIpsWhitelistDto() = default;

void UpdateIpsWhitelistDto::validate()
{
}

web::json::value UpdateIpsWhitelistDto::toJson() const
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
bool UpdateIpsWhitelistDto::fromJson(const web::json::value& val)
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


std::string UpdateIpsWhitelistDto::getSourceAddress() const
{
    return sourceAddress_;
}

void UpdateIpsWhitelistDto::setSourceAddress(const std::string& value)
{
    sourceAddress_ = value;
    sourceAddressIsSet_ = true;
}

bool UpdateIpsWhitelistDto::sourceAddressIsSet() const
{
    return sourceAddressIsSet_;
}

void UpdateIpsWhitelistDto::unsetsourceAddress()
{
    sourceAddressIsSet_ = false;
}

std::string UpdateIpsWhitelistDto::getDestAddress() const
{
    return destAddress_;
}

void UpdateIpsWhitelistDto::setDestAddress(const std::string& value)
{
    destAddress_ = value;
    destAddressIsSet_ = true;
}

bool UpdateIpsWhitelistDto::destAddressIsSet() const
{
    return destAddressIsSet_;
}

void UpdateIpsWhitelistDto::unsetdestAddress()
{
    destAddressIsSet_ = false;
}

int32_t UpdateIpsWhitelistDto::getIpVersion() const
{
    return ipVersion_;
}

void UpdateIpsWhitelistDto::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool UpdateIpsWhitelistDto::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void UpdateIpsWhitelistDto::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string UpdateIpsWhitelistDto::getName() const
{
    return name_;
}

void UpdateIpsWhitelistDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateIpsWhitelistDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateIpsWhitelistDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateIpsWhitelistDto::getIpsId() const
{
    return ipsId_;
}

void UpdateIpsWhitelistDto::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool UpdateIpsWhitelistDto::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void UpdateIpsWhitelistDto::unsetipsId()
{
    ipsIdIsSet_ = false;
}

std::vector<std::string>& UpdateIpsWhitelistDto::getEffectiveScopes()
{
    return effectiveScopes_;
}

void UpdateIpsWhitelistDto::setEffectiveScopes(const std::vector<std::string>& value)
{
    effectiveScopes_ = value;
    effectiveScopesIsSet_ = true;
}

bool UpdateIpsWhitelistDto::effectiveScopesIsSet() const
{
    return effectiveScopesIsSet_;
}

void UpdateIpsWhitelistDto::unseteffectiveScopes()
{
    effectiveScopesIsSet_ = false;
}

std::string UpdateIpsWhitelistDto::getDescription() const
{
    return description_;
}

void UpdateIpsWhitelistDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateIpsWhitelistDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateIpsWhitelistDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


