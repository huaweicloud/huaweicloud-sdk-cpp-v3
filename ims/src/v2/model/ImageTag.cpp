

#include "huaweicloud/ims/v2/model/ImageTag.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImageTag::ImageTag()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ImageTag::~ImageTag() = default;

void ImageTag::validate()
{
}

web::json::value ImageTag::toJson() const
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

bool ImageTag::fromJson(const web::json::value& val)
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


std::string ImageTag::getKey() const
{
    return key_;
}

void ImageTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ImageTag::keyIsSet() const
{
    return keyIsSet_;
}

void ImageTag::unsetkey()
{
    keyIsSet_ = false;
}

std::string ImageTag::getValue() const
{
    return value_;
}

void ImageTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ImageTag::valueIsSet() const
{
    return valueIsSet_;
}

void ImageTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


