

#include "huaweicloud/drs/v3/model/ParamsReqBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ParamsReqBean::ParamsReqBean()
{
    key_ = "";
    keyIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

ParamsReqBean::~ParamsReqBean() = default;

void ParamsReqBean::validate()
{
}

web::json::value ParamsReqBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}
bool ParamsReqBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    return ok;
}


std::string ParamsReqBean::getKey() const
{
    return key_;
}

void ParamsReqBean::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ParamsReqBean::keyIsSet() const
{
    return keyIsSet_;
}

void ParamsReqBean::unsetkey()
{
    keyIsSet_ = false;
}

std::string ParamsReqBean::getTargetValue() const
{
    return targetValue_;
}

void ParamsReqBean::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool ParamsReqBean::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void ParamsReqBean::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


