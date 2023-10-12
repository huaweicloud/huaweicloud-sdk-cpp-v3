

#include "huaweicloud/sdrs/v1/model/TagParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




TagParams::TagParams()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagParams::~TagParams() = default;

void TagParams::validate()
{
}

web::json::value TagParams::toJson() const
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
bool TagParams::fromJson(const web::json::value& val)
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


std::string TagParams::getKey() const
{
    return key_;
}

void TagParams::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagParams::keyIsSet() const
{
    return keyIsSet_;
}

void TagParams::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagParams::getValues()
{
    return values_;
}

void TagParams::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagParams::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagParams::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


