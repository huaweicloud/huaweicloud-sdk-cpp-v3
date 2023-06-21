

#include "huaweicloud/cfw/v1/model/BlackWhiteListResponse_data_records.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BlackWhiteListResponse_data_records::BlackWhiteListResponse_data_records()
{
    listId_ = "";
    listIdIsSet_ = false;
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

BlackWhiteListResponse_data_records::~BlackWhiteListResponse_data_records() = default;

void BlackWhiteListResponse_data_records::validate()
{
}

web::json::value BlackWhiteListResponse_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIdIsSet_) {
        val[utility::conversions::to_string_t("list_id")] = ModelBase::toJson(listId_);
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

bool BlackWhiteListResponse_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListId(refVal);
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


std::string BlackWhiteListResponse_data_records::getListId() const
{
    return listId_;
}

void BlackWhiteListResponse_data_records::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::listIdIsSet() const
{
    return listIdIsSet_;
}

void BlackWhiteListResponse_data_records::unsetlistId()
{
    listIdIsSet_ = false;
}

int32_t BlackWhiteListResponse_data_records::getDirection() const
{
    return direction_;
}

void BlackWhiteListResponse_data_records::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::directionIsSet() const
{
    return directionIsSet_;
}

void BlackWhiteListResponse_data_records::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t BlackWhiteListResponse_data_records::getAddressType() const
{
    return addressType_;
}

void BlackWhiteListResponse_data_records::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void BlackWhiteListResponse_data_records::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string BlackWhiteListResponse_data_records::getAddress() const
{
    return address_;
}

void BlackWhiteListResponse_data_records::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::addressIsSet() const
{
    return addressIsSet_;
}

void BlackWhiteListResponse_data_records::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t BlackWhiteListResponse_data_records::getProtocol() const
{
    return protocol_;
}

void BlackWhiteListResponse_data_records::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::protocolIsSet() const
{
    return protocolIsSet_;
}

void BlackWhiteListResponse_data_records::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string BlackWhiteListResponse_data_records::getPort() const
{
    return port_;
}

void BlackWhiteListResponse_data_records::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool BlackWhiteListResponse_data_records::portIsSet() const
{
    return portIsSet_;
}

void BlackWhiteListResponse_data_records::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


