

#include "huaweicloud/organizations/v1/model/TagsDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TagsDTO::TagsDTO()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagsDTO::~TagsDTO() = default;

void TagsDTO::validate()
{
}

web::json::value TagsDTO::toJson() const
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
bool TagsDTO::fromJson(const web::json::value& val)
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


std::string TagsDTO::getKey() const
{
    return key_;
}

void TagsDTO::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsDTO::keyIsSet() const
{
    return keyIsSet_;
}

void TagsDTO::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagsDTO::getValues()
{
    return values_;
}

void TagsDTO::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagsDTO::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagsDTO::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


