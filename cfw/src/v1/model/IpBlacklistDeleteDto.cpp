

#include "huaweicloud/cfw/v1/model/IpBlacklistDeleteDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpBlacklistDeleteDto::IpBlacklistDeleteDto()
{
    effectScopeIsSet_ = false;
}

IpBlacklistDeleteDto::~IpBlacklistDeleteDto() = default;

void IpBlacklistDeleteDto::validate()
{
}

web::json::value IpBlacklistDeleteDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(effectScopeIsSet_) {
        val[utility::conversions::to_string_t("effect_scope")] = ModelBase::toJson(effectScope_);
    }

    return val;
}
bool IpBlacklistDeleteDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("effect_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect_scope"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectScope(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& IpBlacklistDeleteDto::getEffectScope()
{
    return effectScope_;
}

void IpBlacklistDeleteDto::setEffectScope(std::vector<int32_t> value)
{
    effectScope_ = value;
    effectScopeIsSet_ = true;
}

bool IpBlacklistDeleteDto::effectScopeIsSet() const
{
    return effectScopeIsSet_;
}

void IpBlacklistDeleteDto::unseteffectScope()
{
    effectScopeIsSet_ = false;
}

}
}
}
}
}


