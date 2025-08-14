

#include "huaweicloud/identitycenter/v1/model/GetHaConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetHaConfigurationResponse::GetHaConfigurationResponse()
{
    disasterRecoveryChoice_ = "";
    disasterRecoveryChoiceIsSet_ = false;
}

GetHaConfigurationResponse::~GetHaConfigurationResponse() = default;

void GetHaConfigurationResponse::validate()
{
}

web::json::value GetHaConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryChoiceIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_choice")] = ModelBase::toJson(disasterRecoveryChoice_);
    }

    return val;
}
bool GetHaConfigurationResponse::fromJson(const web::json::value& val)
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


std::string GetHaConfigurationResponse::getDisasterRecoveryChoice() const
{
    return disasterRecoveryChoice_;
}

void GetHaConfigurationResponse::setDisasterRecoveryChoice(const std::string& value)
{
    disasterRecoveryChoice_ = value;
    disasterRecoveryChoiceIsSet_ = true;
}

bool GetHaConfigurationResponse::disasterRecoveryChoiceIsSet() const
{
    return disasterRecoveryChoiceIsSet_;
}

void GetHaConfigurationResponse::unsetdisasterRecoveryChoice()
{
    disasterRecoveryChoiceIsSet_ = false;
}

}
}
}
}
}


