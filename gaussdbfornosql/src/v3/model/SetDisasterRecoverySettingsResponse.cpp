

#include "huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetDisasterRecoverySettingsResponse::SetDisasterRecoverySettingsResponse()
{
    successedInstanceIdsIsSet_ = false;
}

SetDisasterRecoverySettingsResponse::~SetDisasterRecoverySettingsResponse() = default;

void SetDisasterRecoverySettingsResponse::validate()
{
}

web::json::value SetDisasterRecoverySettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successedInstanceIdsIsSet_) {
        val[utility::conversions::to_string_t("successed_instance_ids")] = ModelBase::toJson(successedInstanceIds_);
    }

    return val;
}
bool SetDisasterRecoverySettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("successed_instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("successed_instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessedInstanceIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SetDisasterRecoverySettingsResponse::getSuccessedInstanceIds()
{
    return successedInstanceIds_;
}

void SetDisasterRecoverySettingsResponse::setSuccessedInstanceIds(const std::vector<std::string>& value)
{
    successedInstanceIds_ = value;
    successedInstanceIdsIsSet_ = true;
}

bool SetDisasterRecoverySettingsResponse::successedInstanceIdsIsSet() const
{
    return successedInstanceIdsIsSet_;
}

void SetDisasterRecoverySettingsResponse::unsetsuccessedInstanceIds()
{
    successedInstanceIdsIsSet_ = false;
}

}
}
}
}
}


