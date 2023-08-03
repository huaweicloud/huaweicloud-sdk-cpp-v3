

#include "huaweicloud/cdn/v2/model/CacheUrlParameterFilterGetBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CacheUrlParameterFilterGetBody::CacheUrlParameterFilterGetBody()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CacheUrlParameterFilterGetBody::~CacheUrlParameterFilterGetBody() = default;

void CacheUrlParameterFilterGetBody::validate()
{
}

web::json::value CacheUrlParameterFilterGetBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}

bool CacheUrlParameterFilterGetBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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

std::string CacheUrlParameterFilterGetBody::getType() const
{
    return type_;
}

void CacheUrlParameterFilterGetBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CacheUrlParameterFilterGetBody::typeIsSet() const
{
    return typeIsSet_;
}

void CacheUrlParameterFilterGetBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CacheUrlParameterFilterGetBody::getValue() const
{
    return value_;
}

void CacheUrlParameterFilterGetBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CacheUrlParameterFilterGetBody::valueIsSet() const
{
    return valueIsSet_;
}

void CacheUrlParameterFilterGetBody::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


