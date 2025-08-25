

#include "huaweicloud/cce/v3/model/DelayUpgradePlanRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DelayUpgradePlanRequestBody::DelayUpgradePlanRequestBody()
{
    notBeforeIsSet_ = false;
}

DelayUpgradePlanRequestBody::~DelayUpgradePlanRequestBody() = default;

void DelayUpgradePlanRequestBody::validate()
{
}

web::json::value DelayUpgradePlanRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("notBefore")] = ModelBase::toJson(notBefore_);
    }

    return val;
}
bool DelayUpgradePlanRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("notBefore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notBefore"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    return ok;
}


utility::datetime DelayUpgradePlanRequestBody::getNotBefore() const
{
    return notBefore_;
}

void DelayUpgradePlanRequestBody::setNotBefore(const utility::datetime& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool DelayUpgradePlanRequestBody::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void DelayUpgradePlanRequestBody::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

}
}
}
}
}


