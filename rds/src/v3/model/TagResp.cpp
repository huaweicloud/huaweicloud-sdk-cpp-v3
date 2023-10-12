

#include "huaweicloud/rds/v3/model/TagResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TagResp::TagResp()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagResp::~TagResp() = default;

void TagResp::validate()
{
}

web::json::value TagResp::toJson() const
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
bool TagResp::fromJson(const web::json::value& val)
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


std::string TagResp::getKey() const
{
    return key_;
}

void TagResp::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagResp::keyIsSet() const
{
    return keyIsSet_;
}

void TagResp::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagResp::getValues()
{
    return values_;
}

void TagResp::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagResp::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagResp::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


