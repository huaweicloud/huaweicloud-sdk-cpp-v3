

#include "huaweicloud/ram/v1/model/TagDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




TagDTO::TagDTO()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagDTO::~TagDTO() = default;

void TagDTO::validate()
{
}

web::json::value TagDTO::toJson() const
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
bool TagDTO::fromJson(const web::json::value& val)
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


std::string TagDTO::getKey() const
{
    return key_;
}

void TagDTO::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagDTO::keyIsSet() const
{
    return keyIsSet_;
}

void TagDTO::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagDTO::getValues()
{
    return values_;
}

void TagDTO::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagDTO::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagDTO::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


