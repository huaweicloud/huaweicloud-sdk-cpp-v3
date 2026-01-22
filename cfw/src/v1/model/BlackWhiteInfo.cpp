

#include "huaweicloud/cfw/v1/model/BlackWhiteInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BlackWhiteInfo::BlackWhiteInfo()
{
    address_ = "";
    addressIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
}

BlackWhiteInfo::~BlackWhiteInfo() = default;

void BlackWhiteInfo::validate()
{
}

web::json::value BlackWhiteInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool BlackWhiteInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


std::string BlackWhiteInfo::getAddress() const
{
    return address_;
}

void BlackWhiteInfo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BlackWhiteInfo::addressIsSet() const
{
    return addressIsSet_;
}

void BlackWhiteInfo::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t BlackWhiteInfo::getAddressType() const
{
    return addressType_;
}

void BlackWhiteInfo::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool BlackWhiteInfo::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void BlackWhiteInfo::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string BlackWhiteInfo::getDescription() const
{
    return description_;
}

void BlackWhiteInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BlackWhiteInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BlackWhiteInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t BlackWhiteInfo::getDirection() const
{
    return direction_;
}

void BlackWhiteInfo::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool BlackWhiteInfo::directionIsSet() const
{
    return directionIsSet_;
}

void BlackWhiteInfo::unsetdirection()
{
    directionIsSet_ = false;
}

std::string BlackWhiteInfo::getPort() const
{
    return port_;
}

void BlackWhiteInfo::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool BlackWhiteInfo::portIsSet() const
{
    return portIsSet_;
}

void BlackWhiteInfo::unsetport()
{
    portIsSet_ = false;
}

int32_t BlackWhiteInfo::getProtocol() const
{
    return protocol_;
}

void BlackWhiteInfo::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool BlackWhiteInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void BlackWhiteInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


