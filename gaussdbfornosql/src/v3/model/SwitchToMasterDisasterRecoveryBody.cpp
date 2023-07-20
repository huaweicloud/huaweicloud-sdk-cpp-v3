

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterDisasterRecoveryBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchToMasterDisasterRecoveryBody::SwitchToMasterDisasterRecoveryBody()
{
    force_ = false;
    forceIsSet_ = false;
}

SwitchToMasterDisasterRecoveryBody::~SwitchToMasterDisasterRecoveryBody() = default;

void SwitchToMasterDisasterRecoveryBody::validate()
{
}

web::json::value SwitchToMasterDisasterRecoveryBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }

    return val;
}

bool SwitchToMasterDisasterRecoveryBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    return ok;
}

bool SwitchToMasterDisasterRecoveryBody::isForce() const
{
    return force_;
}

void SwitchToMasterDisasterRecoveryBody::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool SwitchToMasterDisasterRecoveryBody::forceIsSet() const
{
    return forceIsSet_;
}

void SwitchToMasterDisasterRecoveryBody::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


