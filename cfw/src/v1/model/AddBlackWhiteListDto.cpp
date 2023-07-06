

#include "huaweicloud/cfw/v1/model/AddBlackWhiteListDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteListDto::AddBlackWhiteListDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    listType_ = 0;
    listTypeIsSet_ = false;
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
}

AddBlackWhiteListDto::~AddBlackWhiteListDto() = default;

void AddBlackWhiteListDto::validate()
{
}

web::json::value AddBlackWhiteListDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(listTypeIsSet_) {
        val[utility::conversions::to_string_t("list_type")] = ModelBase::toJson(listType_);
    }
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

    return val;
}

bool AddBlackWhiteListDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    return ok;
}

std::string AddBlackWhiteListDto::getObjectId() const
{
    return objectId_;
}

void AddBlackWhiteListDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddBlackWhiteListDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddBlackWhiteListDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t AddBlackWhiteListDto::getListType() const
{
    return listType_;
}

void AddBlackWhiteListDto::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool AddBlackWhiteListDto::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void AddBlackWhiteListDto::unsetlistType()
{
    listTypeIsSet_ = false;
}

int32_t AddBlackWhiteListDto::getDirection() const
{
    return direction_;
}

void AddBlackWhiteListDto::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool AddBlackWhiteListDto::directionIsSet() const
{
    return directionIsSet_;
}

void AddBlackWhiteListDto::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t AddBlackWhiteListDto::getAddressType() const
{
    return addressType_;
}

void AddBlackWhiteListDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddBlackWhiteListDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddBlackWhiteListDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string AddBlackWhiteListDto::getAddress() const
{
    return address_;
}

void AddBlackWhiteListDto::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool AddBlackWhiteListDto::addressIsSet() const
{
    return addressIsSet_;
}

void AddBlackWhiteListDto::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t AddBlackWhiteListDto::getProtocol() const
{
    return protocol_;
}

void AddBlackWhiteListDto::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AddBlackWhiteListDto::protocolIsSet() const
{
    return protocolIsSet_;
}

void AddBlackWhiteListDto::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AddBlackWhiteListDto::getPort() const
{
    return port_;
}

void AddBlackWhiteListDto::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool AddBlackWhiteListDto::portIsSet() const
{
    return portIsSet_;
}

void AddBlackWhiteListDto::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


