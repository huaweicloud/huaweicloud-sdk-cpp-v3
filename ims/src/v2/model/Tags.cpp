

#include "huaweicloud/ims/v2/model/Tags.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




Tags::Tags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

Tags::~Tags() = default;

void Tags::validate()
{
}

web::json::value Tags::toJson() const
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

bool Tags::fromJson(const web::json::value& val)
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


std::string Tags::getKey() const
{
    return key_;
}

void Tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Tags::keyIsSet() const
{
    return keyIsSet_;
}

void Tags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& Tags::getValues()
{
    return values_;
}

void Tags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool Tags::valuesIsSet() const
{
    return valuesIsSet_;
}

void Tags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


