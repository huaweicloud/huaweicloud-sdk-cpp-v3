

#include "huaweicloud/modelarts/v1/model/ServiceCreateRequest_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceCreateRequest_tags::ServiceCreateRequest_tags()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ServiceCreateRequest_tags::~ServiceCreateRequest_tags() = default;

void ServiceCreateRequest_tags::validate()
{
}

web::json::value ServiceCreateRequest_tags::toJson() const
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
bool ServiceCreateRequest_tags::fromJson(const web::json::value& val)
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


std::string ServiceCreateRequest_tags::getKey() const
{
    return key_;
}

void ServiceCreateRequest_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ServiceCreateRequest_tags::keyIsSet() const
{
    return keyIsSet_;
}

void ServiceCreateRequest_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::string ServiceCreateRequest_tags::getValue() const
{
    return value_;
}

void ServiceCreateRequest_tags::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ServiceCreateRequest_tags::valueIsSet() const
{
    return valueIsSet_;
}

void ServiceCreateRequest_tags::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


