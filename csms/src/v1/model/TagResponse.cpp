

#include "huaweicloud/csms/v1/model/TagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




TagResponse::TagResponse()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagResponse::~TagResponse() = default;

void TagResponse::validate()
{
}

web::json::value TagResponse::toJson() const
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

bool TagResponse::fromJson(const web::json::value& val)
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

std::string TagResponse::getKey() const
{
    return key_;
}

void TagResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagResponse::keyIsSet() const
{
    return keyIsSet_;
}

void TagResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagResponse::getValues()
{
    return values_;
}

void TagResponse::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


