

#include "huaweicloud/cfw/v1/model/IpsWhiteListVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsWhiteListVO::IpsWhiteListVO()
{
    sourceAddress_ = "";
    sourceAddressIsSet_ = false;
    destAddress_ = "";
    destAddressIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    listId_ = "";
    listIdIsSet_ = false;
    effectiveScopesIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IpsWhiteListVO::~IpsWhiteListVO() = default;

void IpsWhiteListVO::validate()
{
}

web::json::value IpsWhiteListVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceAddressIsSet_) {
        val[utility::conversions::to_string_t("source_address")] = ModelBase::toJson(sourceAddress_);
    }
    if(destAddressIsSet_) {
        val[utility::conversions::to_string_t("dest_address")] = ModelBase::toJson(destAddress_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(listIdIsSet_) {
        val[utility::conversions::to_string_t("list_id")] = ModelBase::toJson(listId_);
    }
    if(effectiveScopesIsSet_) {
        val[utility::conversions::to_string_t("effective_scopes")] = ModelBase::toJson(effectiveScopes_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool IpsWhiteListVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ips_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsId(refVal);
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


std::string IpsWhiteListVO::getSourceAddress() const
{
    return sourceAddress_;
}

void IpsWhiteListVO::setSourceAddress(const std::string& value)
{
    sourceAddress_ = value;
    sourceAddressIsSet_ = true;
}

bool IpsWhiteListVO::sourceAddressIsSet() const
{
    return sourceAddressIsSet_;
}

void IpsWhiteListVO::unsetsourceAddress()
{
    sourceAddressIsSet_ = false;
}

std::string IpsWhiteListVO::getDestAddress() const
{
    return destAddress_;
}

void IpsWhiteListVO::setDestAddress(const std::string& value)
{
    destAddress_ = value;
    destAddressIsSet_ = true;
}

bool IpsWhiteListVO::destAddressIsSet() const
{
    return destAddressIsSet_;
}

void IpsWhiteListVO::unsetdestAddress()
{
    destAddressIsSet_ = false;
}

std::string IpsWhiteListVO::getName() const
{
    return name_;
}

void IpsWhiteListVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IpsWhiteListVO::nameIsSet() const
{
    return nameIsSet_;
}

void IpsWhiteListVO::unsetname()
{
    nameIsSet_ = false;
}

std::string IpsWhiteListVO::getListId() const
{
    return listId_;
}

void IpsWhiteListVO::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool IpsWhiteListVO::listIdIsSet() const
{
    return listIdIsSet_;
}

void IpsWhiteListVO::unsetlistId()
{
    listIdIsSet_ = false;
}

std::vector<std::string>& IpsWhiteListVO::getEffectiveScopes()
{
    return effectiveScopes_;
}

void IpsWhiteListVO::setEffectiveScopes(const std::vector<std::string>& value)
{
    effectiveScopes_ = value;
    effectiveScopesIsSet_ = true;
}

bool IpsWhiteListVO::effectiveScopesIsSet() const
{
    return effectiveScopesIsSet_;
}

void IpsWhiteListVO::unseteffectiveScopes()
{
    effectiveScopesIsSet_ = false;
}

std::string IpsWhiteListVO::getIpsId() const
{
    return ipsId_;
}

void IpsWhiteListVO::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool IpsWhiteListVO::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void IpsWhiteListVO::unsetipsId()
{
    ipsIdIsSet_ = false;
}

int32_t IpsWhiteListVO::getIpVersion() const
{
    return ipVersion_;
}

void IpsWhiteListVO::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool IpsWhiteListVO::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void IpsWhiteListVO::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string IpsWhiteListVO::getDescription() const
{
    return description_;
}

void IpsWhiteListVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpsWhiteListVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpsWhiteListVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


