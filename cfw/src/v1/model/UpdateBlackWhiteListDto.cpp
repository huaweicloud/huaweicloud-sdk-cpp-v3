

#include "huaweicloud/cfw/v1/model/UpdateBlackWhiteListDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateBlackWhiteListDto::UpdateBlackWhiteListDto()
{
    direction_ = 0;
    directionIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    listType_ = 0;
    listTypeIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
}

UpdateBlackWhiteListDto::~UpdateBlackWhiteListDto() = default;

void UpdateBlackWhiteListDto::validate()
{
}

web::json::value UpdateBlackWhiteListDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(listTypeIsSet_) {
        val[utility::conversions::to_string_t("list_type")] = ModelBase::toJson(listType_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }

    return val;
}

bool UpdateBlackWhiteListDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListType(refVal);
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
    return ok;
}

int32_t UpdateBlackWhiteListDto::getDirection() const
{
    return direction_;
}

void UpdateBlackWhiteListDto::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool UpdateBlackWhiteListDto::directionIsSet() const
{
    return directionIsSet_;
}

void UpdateBlackWhiteListDto::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t UpdateBlackWhiteListDto::getAddressType() const
{
    return addressType_;
}

void UpdateBlackWhiteListDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool UpdateBlackWhiteListDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void UpdateBlackWhiteListDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string UpdateBlackWhiteListDto::getAddress() const
{
    return address_;
}

void UpdateBlackWhiteListDto::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool UpdateBlackWhiteListDto::addressIsSet() const
{
    return addressIsSet_;
}

void UpdateBlackWhiteListDto::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t UpdateBlackWhiteListDto::getProtocol() const
{
    return protocol_;
}

void UpdateBlackWhiteListDto::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool UpdateBlackWhiteListDto::protocolIsSet() const
{
    return protocolIsSet_;
}

void UpdateBlackWhiteListDto::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string UpdateBlackWhiteListDto::getPort() const
{
    return port_;
}

void UpdateBlackWhiteListDto::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateBlackWhiteListDto::portIsSet() const
{
    return portIsSet_;
}

void UpdateBlackWhiteListDto::unsetport()
{
    portIsSet_ = false;
}

int32_t UpdateBlackWhiteListDto::getListType() const
{
    return listType_;
}

void UpdateBlackWhiteListDto::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool UpdateBlackWhiteListDto::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void UpdateBlackWhiteListDto::unsetlistType()
{
    listTypeIsSet_ = false;
}

std::string UpdateBlackWhiteListDto::getObjectId() const
{
    return objectId_;
}

void UpdateBlackWhiteListDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool UpdateBlackWhiteListDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void UpdateBlackWhiteListDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

}
}
}
}
}


