

#include "huaweicloud/tms/v1/model/PredefineTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




PredefineTagRequest::PredefineTagRequest()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

PredefineTagRequest::~PredefineTagRequest() = default;

void PredefineTagRequest::validate()
{
}

web::json::value PredefineTagRequest::toJson() const
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

bool PredefineTagRequest::fromJson(const web::json::value& val)
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

std::string PredefineTagRequest::getKey() const
{
    return key_;
}

void PredefineTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PredefineTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void PredefineTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string PredefineTagRequest::getValue() const
{
    return value_;
}

void PredefineTagRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PredefineTagRequest::valueIsSet() const
{
    return valueIsSet_;
}

void PredefineTagRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


