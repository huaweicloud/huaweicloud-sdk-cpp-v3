

#include "huaweicloud/modelarts/v1/model/TmsTagResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsTagResp::TmsTagResp()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TmsTagResp::~TmsTagResp() = default;

void TmsTagResp::validate()
{
}

web::json::value TmsTagResp::toJson() const
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
bool TmsTagResp::fromJson(const web::json::value& val)
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


std::string TmsTagResp::getKey() const
{
    return key_;
}

void TmsTagResp::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TmsTagResp::keyIsSet() const
{
    return keyIsSet_;
}

void TmsTagResp::unsetkey()
{
    keyIsSet_ = false;
}

std::string TmsTagResp::getValue() const
{
    return value_;
}

void TmsTagResp::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TmsTagResp::valueIsSet() const
{
    return valueIsSet_;
}

void TmsTagResp::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


