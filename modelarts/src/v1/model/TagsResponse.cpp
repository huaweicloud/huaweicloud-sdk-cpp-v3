

#include "huaweicloud/modelarts/v1/model/TagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TagsResponse::TagsResponse()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TagsResponse::~TagsResponse() = default;

void TagsResponse::validate()
{
}

web::json::value TagsResponse::toJson() const
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
bool TagsResponse::fromJson(const web::json::value& val)
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


std::string TagsResponse::getKey() const
{
    return key_;
}

void TagsResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsResponse::keyIsSet() const
{
    return keyIsSet_;
}

void TagsResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsResponse::getValue() const
{
    return value_;
}

void TagsResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TagsResponse::valueIsSet() const
{
    return valueIsSet_;
}

void TagsResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


