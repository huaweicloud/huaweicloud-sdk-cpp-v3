

#include "huaweicloud/codeartspipeline/v2/model/StepRun_inputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




StepRun_inputs::StepRun_inputs()
{
    key_ = "";
    keyIsSet_ = false;
    valueIsSet_ = false;
}

StepRun_inputs::~StepRun_inputs() = default;

void StepRun_inputs::validate()
{
}

web::json::value StepRun_inputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool StepRun_inputs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string StepRun_inputs::getKey() const
{
    return key_;
}

void StepRun_inputs::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool StepRun_inputs::keyIsSet() const
{
    return keyIsSet_;
}

void StepRun_inputs::unsetkey()
{
    keyIsSet_ = false;
}

Object StepRun_inputs::getValue() const
{
    return value_;
}

void StepRun_inputs::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool StepRun_inputs::valueIsSet() const
{
    return valueIsSet_;
}

void StepRun_inputs::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


