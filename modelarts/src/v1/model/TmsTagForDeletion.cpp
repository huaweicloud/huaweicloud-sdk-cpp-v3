

#include "huaweicloud/modelarts/v1/model/TmsTagForDeletion.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsTagForDeletion::TmsTagForDeletion()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TmsTagForDeletion::~TmsTagForDeletion() = default;

void TmsTagForDeletion::validate()
{
}

web::json::value TmsTagForDeletion::toJson() const
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
bool TmsTagForDeletion::fromJson(const web::json::value& val)
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


std::string TmsTagForDeletion::getKey() const
{
    return key_;
}

void TmsTagForDeletion::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TmsTagForDeletion::keyIsSet() const
{
    return keyIsSet_;
}

void TmsTagForDeletion::unsetkey()
{
    keyIsSet_ = false;
}

std::string TmsTagForDeletion::getValue() const
{
    return value_;
}

void TmsTagForDeletion::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TmsTagForDeletion::valueIsSet() const
{
    return valueIsSet_;
}

void TmsTagForDeletion::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


