

#include "huaweicloud/eip/v2/model/TagReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




TagReq::TagReq()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

TagReq::~TagReq() = default;

void TagReq::validate()
{
}

web::json::value TagReq::toJson() const
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

bool TagReq::fromJson(const web::json::value& val)
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


std::string TagReq::getKey() const
{
    return key_;
}

void TagReq::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool TagReq::keyIsSet() const
{
    return keyIsSet_;
}

void TagReq::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& TagReq::getValues()
{
    return values_;
}

void TagReq::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool TagReq::valuesIsSet() const
{
    return valuesIsSet_;
}

void TagReq::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


