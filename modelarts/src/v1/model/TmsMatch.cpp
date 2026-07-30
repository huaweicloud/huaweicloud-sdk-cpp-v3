

#include "huaweicloud/modelarts/v1/model/TmsMatch.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsMatch::TmsMatch()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TmsMatch::~TmsMatch() = default;

void TmsMatch::validate()
{
}

web::json::value TmsMatch::toJson() const
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
bool TmsMatch::fromJson(const web::json::value& val)
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


std::string TmsMatch::getKey() const
{
    return key_;
}

void TmsMatch::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TmsMatch::keyIsSet() const
{
    return keyIsSet_;
}

void TmsMatch::unsetkey()
{
    keyIsSet_ = false;
}

std::string TmsMatch::getValue() const
{
    return value_;
}

void TmsMatch::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TmsMatch::valueIsSet() const
{
    return valueIsSet_;
}

void TmsMatch::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


