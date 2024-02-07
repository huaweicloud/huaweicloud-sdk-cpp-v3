

#include "huaweicloud/geip/v3/model/CreateGlobalEipRequestBody_global_eip_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipRequestBody_global_eip_tags::CreateGlobalEipRequestBody_global_eip_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateGlobalEipRequestBody_global_eip_tags::~CreateGlobalEipRequestBody_global_eip_tags() = default;

void CreateGlobalEipRequestBody_global_eip_tags::validate()
{
}

web::json::value CreateGlobalEipRequestBody_global_eip_tags::toJson() const
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
bool CreateGlobalEipRequestBody_global_eip_tags::fromJson(const web::json::value& val)
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


std::string CreateGlobalEipRequestBody_global_eip_tags::getKey() const
{
    return key_;
}

void CreateGlobalEipRequestBody_global_eip_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip_tags::keyIsSet() const
{
    return keyIsSet_;
}

void CreateGlobalEipRequestBody_global_eip_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip_tags::getValue() const
{
    return value_;
}

void CreateGlobalEipRequestBody_global_eip_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip_tags::valueIsSet() const
{
    return valueIsSet_;
}

void CreateGlobalEipRequestBody_global_eip_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


