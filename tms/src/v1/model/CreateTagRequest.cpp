

#include "huaweicloud/tms/v1/model/CreateTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreateTagRequest::CreateTagRequest()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateTagRequest::~CreateTagRequest() = default;

void CreateTagRequest::validate()
{
}

web::json::value CreateTagRequest::toJson() const
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

bool CreateTagRequest::fromJson(const web::json::value& val)
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

std::string CreateTagRequest::getKey() const
{
    return key_;
}

void CreateTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void CreateTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateTagRequest::getValue() const
{
    return value_;
}

void CreateTagRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateTagRequest::valueIsSet() const
{
    return valueIsSet_;
}

void CreateTagRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


