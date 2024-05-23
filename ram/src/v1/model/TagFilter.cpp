

#include "huaweicloud/ram/v1/model/TagFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




TagFilter::TagFilter()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagFilter::~TagFilter() = default;

void TagFilter::validate()
{
}

web::json::value TagFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool TagFilter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string TagFilter::getKey() const
{
    return key_;
}

void TagFilter::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagFilter::keyIsSet() const
{
    return keyIsSet_;
}

void TagFilter::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagFilter::getValues()
{
    return values_;
}

void TagFilter::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagFilter::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagFilter::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


