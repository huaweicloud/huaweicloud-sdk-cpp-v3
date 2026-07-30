

#include "huaweicloud/modelarts/v1/model/TmsTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsTag::TmsTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TmsTag::~TmsTag() = default;

void TmsTag::validate()
{
}

web::json::value TmsTag::toJson() const
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
bool TmsTag::fromJson(const web::json::value& val)
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


std::string TmsTag::getKey() const
{
    return key_;
}

void TmsTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TmsTag::keyIsSet() const
{
    return keyIsSet_;
}

void TmsTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string TmsTag::getValue() const
{
    return value_;
}

void TmsTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TmsTag::valueIsSet() const
{
    return valueIsSet_;
}

void TmsTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


