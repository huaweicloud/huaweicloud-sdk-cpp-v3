

#include "huaweicloud/cdn/v1/model/CacheUrlParameterFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CacheUrlParameterFilter::CacheUrlParameterFilter()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CacheUrlParameterFilter::~CacheUrlParameterFilter() = default;

void CacheUrlParameterFilter::validate()
{
}

web::json::value CacheUrlParameterFilter::toJson() const
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
bool CacheUrlParameterFilter::fromJson(const web::json::value& val)
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


std::string CacheUrlParameterFilter::getType() const
{
    return type_;
}

void CacheUrlParameterFilter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CacheUrlParameterFilter::typeIsSet() const
{
    return typeIsSet_;
}

void CacheUrlParameterFilter::unsettype()
{
    typeIsSet_ = false;
}

std::string CacheUrlParameterFilter::getValue() const
{
    return value_;
}

void CacheUrlParameterFilter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CacheUrlParameterFilter::valueIsSet() const
{
    return valueIsSet_;
}

void CacheUrlParameterFilter::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


