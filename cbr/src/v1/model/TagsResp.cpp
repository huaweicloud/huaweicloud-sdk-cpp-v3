

#include "huaweicloud/cbr/v1/model/TagsResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




TagsResp::TagsResp()
{
    key_ = "";
    keyIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
}

TagsResp::~TagsResp() = default;

void TagsResp::validate()
{
}

web::json::value TagsResp::toJson() const
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

bool TagsResp::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string TagsResp::getKey() const
{
    return key_;
}

void TagsResp::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagsResp::keyIsSet() const
{
    return keyIsSet_;
}

void TagsResp::unsetkey()
{
    keyIsSet_ = false;
}

std::string TagsResp::getValues() const
{
    return values_;
}

void TagsResp::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagsResp::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagsResp::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


