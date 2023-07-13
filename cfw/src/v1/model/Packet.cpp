

#include "huaweicloud/cfw/v1/model/Packet.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Packet::Packet()
{
    hexIndex_ = "";
    hexIndexIsSet_ = false;
    utf8String_ = "";
    utf8StringIsSet_ = false;
    hexsIsSet_ = false;
}

Packet::~Packet() = default;

void Packet::validate()
{
}

web::json::value Packet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hexIndexIsSet_) {
        val[utility::conversions::to_string_t("hex_index")] = ModelBase::toJson(hexIndex_);
    }
    if(utf8StringIsSet_) {
        val[utility::conversions::to_string_t("utf8_string")] = ModelBase::toJson(utf8String_);
    }
    if(hexsIsSet_) {
        val[utility::conversions::to_string_t("hexs")] = ModelBase::toJson(hexs_);
    }

    return val;
}

bool Packet::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("utf8_string"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utf8_string"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUtf8String(refVal);
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
    return ok;
}

std::string Packet::getHexIndex() const
{
    return hexIndex_;
}

void Packet::setHexIndex(const std::string& value)
{
    hexIndex_ = value;
    hexIndexIsSet_ = true;
}

bool Packet::hexIndexIsSet() const
{
    return hexIndexIsSet_;
}

void Packet::unsethexIndex()
{
    hexIndexIsSet_ = false;
}

std::string Packet::getUtf8String() const
{
    return utf8String_;
}

void Packet::setUtf8String(const std::string& value)
{
    utf8String_ = value;
    utf8StringIsSet_ = true;
}

bool Packet::utf8StringIsSet() const
{
    return utf8StringIsSet_;
}

void Packet::unsetutf8String()
{
    utf8StringIsSet_ = false;
}

std::vector<std::string>& Packet::getHexs()
{
    return hexs_;
}

void Packet::setHexs(const std::vector<std::string>& value)
{
    hexs_ = value;
    hexsIsSet_ = true;
}

bool Packet::hexsIsSet() const
{
    return hexsIsSet_;
}

void Packet::unsethexs()
{
    hexsIsSet_ = false;
}

}
}
}
}
}


