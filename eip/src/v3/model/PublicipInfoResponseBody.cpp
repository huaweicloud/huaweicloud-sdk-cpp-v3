

#include "huaweicloud/eip/v3/model/PublicipInfoResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipInfoResponseBody::PublicipInfoResponseBody()
{
    publicipAddress_ = "";
    publicipAddressIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
    publicipType_ = "";
    publicipTypeIsSet_ = false;
    publicipv6Address_ = "";
    publicipv6AddressIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
}

PublicipInfoResponseBody::~PublicipInfoResponseBody() = default;

void PublicipInfoResponseBody::validate()
{
}

web::json::value PublicipInfoResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipAddressIsSet_) {
        val[utility::conversions::to_string_t("publicip_address")] = ModelBase::toJson(publicipAddress_);
    }
    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(publicipTypeIsSet_) {
        val[utility::conversions::to_string_t("publicip_type")] = ModelBase::toJson(publicipType_);
    }
    if(publicipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("publicipv6_address")] = ModelBase::toJson(publicipv6Address_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }

    return val;
}

bool PublicipInfoResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicipv6_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipv6Address(refVal);
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
    return ok;
}

std::string PublicipInfoResponseBody::getPublicipAddress() const
{
    return publicipAddress_;
}

void PublicipInfoResponseBody::setPublicipAddress(const std::string& value)
{
    publicipAddress_ = value;
    publicipAddressIsSet_ = true;
}

bool PublicipInfoResponseBody::publicipAddressIsSet() const
{
    return publicipAddressIsSet_;
}

void PublicipInfoResponseBody::unsetpublicipAddress()
{
    publicipAddressIsSet_ = false;
}

std::string PublicipInfoResponseBody::getPublicipId() const
{
    return publicipId_;
}

void PublicipInfoResponseBody::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool PublicipInfoResponseBody::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void PublicipInfoResponseBody::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

std::string PublicipInfoResponseBody::getPublicipType() const
{
    return publicipType_;
}

void PublicipInfoResponseBody::setPublicipType(const std::string& value)
{
    publicipType_ = value;
    publicipTypeIsSet_ = true;
}

bool PublicipInfoResponseBody::publicipTypeIsSet() const
{
    return publicipTypeIsSet_;
}

void PublicipInfoResponseBody::unsetpublicipType()
{
    publicipTypeIsSet_ = false;
}

std::string PublicipInfoResponseBody::getPublicipv6Address() const
{
    return publicipv6Address_;
}

void PublicipInfoResponseBody::setPublicipv6Address(const std::string& value)
{
    publicipv6Address_ = value;
    publicipv6AddressIsSet_ = true;
}

bool PublicipInfoResponseBody::publicipv6AddressIsSet() const
{
    return publicipv6AddressIsSet_;
}

void PublicipInfoResponseBody::unsetpublicipv6Address()
{
    publicipv6AddressIsSet_ = false;
}

int32_t PublicipInfoResponseBody::getIpVersion() const
{
    return ipVersion_;
}

void PublicipInfoResponseBody::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipInfoResponseBody::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipInfoResponseBody::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

}
}
}
}
}


