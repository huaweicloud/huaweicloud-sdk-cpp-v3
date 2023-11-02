

#include "huaweicloud/dbss/v1/model/TagKeyValuesBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TagKeyValuesBean::TagKeyValuesBean()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagKeyValuesBean::~TagKeyValuesBean() = default;

void TagKeyValuesBean::validate()
{
}

web::json::value TagKeyValuesBean::toJson() const
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
bool TagKeyValuesBean::fromJson(const web::json::value& val)
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


std::string TagKeyValuesBean::getKey() const
{
    return key_;
}

void TagKeyValuesBean::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagKeyValuesBean::keyIsSet() const
{
    return keyIsSet_;
}

void TagKeyValuesBean::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagKeyValuesBean::getValues()
{
    return values_;
}

void TagKeyValuesBean::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagKeyValuesBean::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagKeyValuesBean::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


