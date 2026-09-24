

#include "huaweicloud/cbr/v1/model/BulkCreateAndDeleteTags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BulkCreateAndDeleteTags::BulkCreateAndDeleteTags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

BulkCreateAndDeleteTags::~BulkCreateAndDeleteTags() = default;

void BulkCreateAndDeleteTags::validate()
{
}

web::json::value BulkCreateAndDeleteTags::toJson() const
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
bool BulkCreateAndDeleteTags::fromJson(const web::json::value& val)
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


std::string BulkCreateAndDeleteTags::getKey() const
{
    return key_;
}

void BulkCreateAndDeleteTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool BulkCreateAndDeleteTags::keyIsSet() const
{
    return keyIsSet_;
}

void BulkCreateAndDeleteTags::unsetkey()
{
    keyIsSet_ = false;
}

std::string BulkCreateAndDeleteTags::getValue() const
{
    return value_;
}

void BulkCreateAndDeleteTags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool BulkCreateAndDeleteTags::valueIsSet() const
{
    return valueIsSet_;
}

void BulkCreateAndDeleteTags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


