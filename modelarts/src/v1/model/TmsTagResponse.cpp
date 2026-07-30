

#include "huaweicloud/modelarts/v1/model/TmsTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TmsTagResponse::TmsTagResponse()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TmsTagResponse::~TmsTagResponse() = default;

void TmsTagResponse::validate()
{
}

web::json::value TmsTagResponse::toJson() const
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
bool TmsTagResponse::fromJson(const web::json::value& val)
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


std::string TmsTagResponse::getKey() const
{
    return key_;
}

void TmsTagResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TmsTagResponse::keyIsSet() const
{
    return keyIsSet_;
}

void TmsTagResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::string TmsTagResponse::getValue() const
{
    return value_;
}

void TmsTagResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TmsTagResponse::valueIsSet() const
{
    return valueIsSet_;
}

void TmsTagResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


