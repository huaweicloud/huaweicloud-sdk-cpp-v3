

#include "huaweicloud/rds/v3/model/TagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TagResponse::TagResponse()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagResponse::~TagResponse() = default;

void TagResponse::validate()
{
}

web::json::value TagResponse::toJson() const
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
bool TagResponse::fromJson(const web::json::value& val)
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


std::string TagResponse::getKey() const
{
    return key_;
}

void TagResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagResponse::keyIsSet() const
{
    return keyIsSet_;
}

void TagResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagResponse::getValue() const
{
    return value_;
}

void TagResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagResponse::valueIsSet() const
{
    return valueIsSet_;
}

void TagResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


