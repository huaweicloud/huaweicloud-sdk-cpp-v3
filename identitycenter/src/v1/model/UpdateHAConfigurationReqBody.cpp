

#include "huaweicloud/identitycenter/v1/model/UpdateHAConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateHAConfigurationReqBody::UpdateHAConfigurationReqBody()
{
    disasterRecoveryChoice_ = "";
    disasterRecoveryChoiceIsSet_ = false;
}

UpdateHAConfigurationReqBody::~UpdateHAConfigurationReqBody() = default;

void UpdateHAConfigurationReqBody::validate()
{
}

web::json::value UpdateHAConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryChoiceIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_choice")] = ModelBase::toJson(disasterRecoveryChoice_);
    }

    return val;
}
bool UpdateHAConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_choice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_choice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryChoice(refVal);
        }
    }
    return ok;
}


std::string UpdateHAConfigurationReqBody::getDisasterRecoveryChoice() const
{
    return disasterRecoveryChoice_;
}

void UpdateHAConfigurationReqBody::setDisasterRecoveryChoice(const std::string& value)
{
    disasterRecoveryChoice_ = value;
    disasterRecoveryChoiceIsSet_ = true;
}

bool UpdateHAConfigurationReqBody::disasterRecoveryChoiceIsSet() const
{
    return disasterRecoveryChoiceIsSet_;
}

void UpdateHAConfigurationReqBody::unsetdisasterRecoveryChoice()
{
    disasterRecoveryChoiceIsSet_ = false;
}

}
}
}
}
}


