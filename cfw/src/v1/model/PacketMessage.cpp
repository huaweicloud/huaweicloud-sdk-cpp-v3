

#include "huaweicloud/cfw/v1/model/PacketMessage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PacketMessage::PacketMessage()
{
    hexIndex_ = "";
    hexIndexIsSet_ = false;
    hexsIsSet_ = false;
    utf8String_ = "";
    utf8StringIsSet_ = false;
}

PacketMessage::~PacketMessage() = default;

void PacketMessage::validate()
{
}

web::json::value PacketMessage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hexIndexIsSet_) {
        val[utility::conversions::to_string_t("hex_index")] = ModelBase::toJson(hexIndex_);
    }
    if(hexsIsSet_) {
        val[utility::conversions::to_string_t("hexs")] = ModelBase::toJson(hexs_);
    }
    if(utf8StringIsSet_) {
        val[utility::conversions::to_string_t("utf8_String")] = ModelBase::toJson(utf8String_);
    }

    return val;
}

bool PacketMessage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hex_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hex_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHexIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hexs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hexs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHexs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("utf8_String"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utf8_String"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUtf8String(refVal);
        }
    }
    return ok;
}


std::string PacketMessage::getHexIndex() const
{
    return hexIndex_;
}

void PacketMessage::setHexIndex(const std::string& value)
{
    hexIndex_ = value;
    hexIndexIsSet_ = true;
}

bool PacketMessage::hexIndexIsSet() const
{
    return hexIndexIsSet_;
}

void PacketMessage::unsethexIndex()
{
    hexIndexIsSet_ = false;
}

std::vector<std::string>& PacketMessage::getHexs()
{
    return hexs_;
}

void PacketMessage::setHexs(const std::vector<std::string>& value)
{
    hexs_ = value;
    hexsIsSet_ = true;
}

bool PacketMessage::hexsIsSet() const
{
    return hexsIsSet_;
}

void PacketMessage::unsethexs()
{
    hexsIsSet_ = false;
}

std::string PacketMessage::getUtf8String() const
{
    return utf8String_;
}

void PacketMessage::setUtf8String(const std::string& value)
{
    utf8String_ = value;
    utf8StringIsSet_ = true;
}

bool PacketMessage::utf8StringIsSet() const
{
    return utf8StringIsSet_;
}

void PacketMessage::unsetutf8String()
{
    utf8StringIsSet_ = false;
}

}
}
}
}
}


