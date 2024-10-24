

#include "huaweicloud/live/v1/model/HttpHeader.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




HttpHeader::HttpHeader()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

HttpHeader::~HttpHeader() = default;

void HttpHeader::validate()
{
}

web::json::value HttpHeader::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool HttpHeader::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string HttpHeader::getKey() const
{
    return key_;
}

void HttpHeader::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool HttpHeader::keyIsSet() const
{
    return keyIsSet_;
}

void HttpHeader::unsetkey()
{
    keyIsSet_ = false;
}

std::string HttpHeader::getValue() const
{
    return value_;
}

void HttpHeader::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool HttpHeader::valueIsSet() const
{
    return valueIsSet_;
}

void HttpHeader::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


