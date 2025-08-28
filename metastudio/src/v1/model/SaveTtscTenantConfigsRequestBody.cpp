

#include "huaweicloud/metastudio/v1/model/SaveTtscTenantConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscTenantConfigsRequestBody::SaveTtscTenantConfigsRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

SaveTtscTenantConfigsRequestBody::~SaveTtscTenantConfigsRequestBody() = default;

void SaveTtscTenantConfigsRequestBody::validate()
{
}

web::json::value SaveTtscTenantConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool SaveTtscTenantConfigsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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


std::string SaveTtscTenantConfigsRequestBody::getId() const
{
    return id_;
}

void SaveTtscTenantConfigsRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SaveTtscTenantConfigsRequestBody::idIsSet() const
{
    return idIsSet_;
}

void SaveTtscTenantConfigsRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequestBody::getKey() const
{
    return key_;
}

void SaveTtscTenantConfigsRequestBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SaveTtscTenantConfigsRequestBody::keyIsSet() const
{
    return keyIsSet_;
}

void SaveTtscTenantConfigsRequestBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string SaveTtscTenantConfigsRequestBody::getValue() const
{
    return value_;
}

void SaveTtscTenantConfigsRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SaveTtscTenantConfigsRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void SaveTtscTenantConfigsRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


