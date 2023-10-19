

#include "huaweicloud/cfw/v1/model/TagInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TagInfo::TagInfo()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagInfo::~TagInfo() = default;

void TagInfo::validate()
{
}

web::json::value TagInfo::toJson() const
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
bool TagInfo::fromJson(const web::json::value& val)
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


std::string TagInfo::getKey() const
{
    return key_;
}

void TagInfo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagInfo::keyIsSet() const
{
    return keyIsSet_;
}

void TagInfo::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagInfo::getValues()
{
    return values_;
}

void TagInfo::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagInfo::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagInfo::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


