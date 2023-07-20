

#include "huaweicloud/gaussdbfornosql/v3/model/TagOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




TagOption::TagOption()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagOption::~TagOption() = default;

void TagOption::validate()
{
}

web::json::value TagOption::toJson() const
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

bool TagOption::fromJson(const web::json::value& val)
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

std::string TagOption::getKey() const
{
    return key_;
}

void TagOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagOption::keyIsSet() const
{
    return keyIsSet_;
}

void TagOption::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagOption::getValues()
{
    return values_;
}

void TagOption::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagOption::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagOption::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


