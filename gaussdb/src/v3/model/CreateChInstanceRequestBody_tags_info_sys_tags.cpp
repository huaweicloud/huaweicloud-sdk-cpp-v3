

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_tags_info_sys_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceRequestBody_tags_info_sys_tags::CreateChInstanceRequestBody_tags_info_sys_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CreateChInstanceRequestBody_tags_info_sys_tags::~CreateChInstanceRequestBody_tags_info_sys_tags() = default;

void CreateChInstanceRequestBody_tags_info_sys_tags::validate()
{
}

web::json::value CreateChInstanceRequestBody_tags_info_sys_tags::toJson() const
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
bool CreateChInstanceRequestBody_tags_info_sys_tags::fromJson(const web::json::value& val)
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


std::string CreateChInstanceRequestBody_tags_info_sys_tags::getKey() const
{
    return key_;
}

void CreateChInstanceRequestBody_tags_info_sys_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CreateChInstanceRequestBody_tags_info_sys_tags::keyIsSet() const
{
    return keyIsSet_;
}

void CreateChInstanceRequestBody_tags_info_sys_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string CreateChInstanceRequestBody_tags_info_sys_tags::getValue() const
{
    return value_;
}

void CreateChInstanceRequestBody_tags_info_sys_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateChInstanceRequestBody_tags_info_sys_tags::valueIsSet() const
{
    return valueIsSet_;
}

void CreateChInstanceRequestBody_tags_info_sys_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


